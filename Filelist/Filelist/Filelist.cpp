
#include "pch.h"
#include <iostream>
#include <windows.h>
#include <winnt.h>
#include <vector>
#include <tuple>

struct file_list {
	std::string filename;
};


int list_files(std::vector<file_list> &files, const char *directory) {
	std::string dir = directory;
	dir.append("\\*");
	WIN32_FIND_DATAA findFileData;
	HANDLE hFind = FindFirstFileA(dir.c_str(), &findFileData);
	if(hFind == INVALID_HANDLE_VALUE) {
		std::cout << "INVALID_HANDLE_VALUE" << std::endl;
		return 1;
	}
	BOOL more_files = true;
	while(more_files) {
		if(findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY && findFileData.cFileName[0] != '.') {
			std::string newDir = directory;
			newDir.append("\\");
			newDir.append(findFileData.cFileName);
			int rc = list_files(files, newDir.c_str());
		}
		file_list file;
		file.filename.append(directory).append("\\").append(findFileData.cFileName);
		files.push_back(file);
		more_files = FindNextFileA(hFind, &findFileData);
	}
	FindClose(hFind);
	return 0;
}

int main(int argc, char *argv[]) {

	std::vector<file_list> files;

	char *directory = argv[1];
	std::cout << directory << std::endl;
	int rc = list_files(files, directory);
	if(rc != 0) {
		std::cout << "Return code from list_files is " << rc << std::endl;
		return rc;
	}
	std::cout << "Done ..." << std::endl;
}