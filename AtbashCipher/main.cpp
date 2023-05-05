#include "atbash_cipher.h"
#include <iostream>

int main() {
    std::string input = "Hello, World!";
    std::string encoded = atbash::encode(input, true);
    std::cout << "Encoded string: " << encoded << std::endl;

    std::string decoded = atbash::decode(encoded);
    std::cout << "Decoded string: " << decoded << std::endl;

    return 0;
}
