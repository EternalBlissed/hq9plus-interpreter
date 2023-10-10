#include "hq9plus.h"
#include <iostream>

void singBeerSong() {
    for (int i = 99; i > 0; i--) {
        std::cout << i << " bottles of beer on the wall," << std::endl;
        std::cout << i << " bottles of beer." << std::endl;
        std::cout << "Take one down, pass it around," << std::endl;
        std::cout << i - 1 << " bottles of beer on the wall." << std::endl;
    }
}
