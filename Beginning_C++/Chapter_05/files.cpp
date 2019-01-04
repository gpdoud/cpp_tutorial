#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <tuple>

struct file_size {
    unsigned int high;
    unsigned int low;
};

using file_info = std::tuple<std::string, file_size>;

void files_in_folder(const char *folderPath, std::vector<file_info> &files) {
}

int main(int argc, char *argv[]) {

    if(argc < 2)
        return 1;

    std::vector<file_info> files;
    files_in_folder(argv[1], files);
}