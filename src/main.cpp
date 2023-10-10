#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "hq9plus.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename.hq9+>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];

    if (!isHq9PlusFile(filename)) {
        std::cerr << "Error: The file must have a '.hq9+' extension." << std::endl;
        return 1;
    }

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return 1;
    }

    std::vector<std::string> lines;
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    int plus = 0;

    for (const std::string& line : lines) {
        if (line == "H") {
            sayHello();
        } else if (line == "Q") {
            printFileContents(filename);
        } else if (line == "9") {
            singBeerSong();
        } else if (line == "+") {
            plus++;
            incrementCounter();
        }
    }

    printAccumulatorValue(plus);

    return 0;
}
