#include "hq9plus.h"
#include <iostream>
#include <fstream>

void printFileContents(const std::string& filename) {
    std::ifstream file_contents(filename);
    if (file_contents) {
        std::string contents((std::istreambuf_iterator<char>(file_contents)), (std::istreambuf_iterator<char>()));
        std::cout << contents << std::endl;
    } else {
        std::cerr << "Something went wrong reading the file" << std::endl;
    }
}
