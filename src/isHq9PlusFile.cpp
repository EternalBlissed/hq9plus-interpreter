#include "hq9plus.h"

bool isHq9PlusFile(const std::string& filename) {
    // Get the file extension
    size_t dotPos = filename.find_last_of(".");
    if (dotPos != std::string::npos) {
        std::string extension = filename.substr(dotPos + 1);
        // Check if the extension is "hq9+"
        return (extension == "hq9+");
    }
    return false;
}
