#include "Headers/clock.h"
#include <iostream>

int main() {
    dated::clock c = dated::clock::at(9,30);
    std::cout << static_cast<std::string>(c) << std::endl;
    c = c.plus(90);
    std::cout << static_cast<std::string>(c) << std::endl;

    return 0;
}
