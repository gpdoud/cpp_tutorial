
#include "pch.h"
#include <iostream>
#include <windows.h>

int main(int argc, char *argv[]) {

	char *directory = argv[1];
	std::cout << directory << std::endl;

	WIN32_FIND_DATAA findFileData;
	HANDLE hFind = FindFirstFileA(directory, &findFileData);
	if(hFind == INVALID_HANDLE_VALUE) {
		std::cout << "INVALID_HANDLE_VALUE" << std::endl;
		return 1;
	}
	BOOL more_files = true;
	while(more_files) {
		std::cout << findFileData.cFileName << std::endl;
		more_files = FindNextFileA(hFind, &findFileData);
	}
	FindClose(hFind);
	std::cout << "Done ..." << std::endl;
}