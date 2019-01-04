#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <Windows.h>

struct file_size {
	unsigned int high;
	unsigned int low;
};

using file_info = std::tuple<std::string, file_size>;

void files_in_folder(const char *folderPath, std::vector<file_info> &files) {
	std::string folder(folderPath);
	folder += "*";
	WIN32_FIND_DATAA findfiledata{};
	void *hFind = FindFirstFileA(folder.c_str(), &findfiledata);
	if(hFind != INVALID_HANDLE_VALUE) {
		do {

		} while(FindNextFileA(hFind, &findfiledata));
		FindClose(hFind);
	}
}

int main(int argc, char *argv[]) {

	if(argc < 2)
		return 1;
	
	std::vector<file_info> files;
	files_in_folder(argv[1], files);
}