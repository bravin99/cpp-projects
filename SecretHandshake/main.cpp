#include "handshake.h"
#include <iostream>
#include <sstream>

int main()
{
    unsigned int code;
    std::string input_str;

    std::cout << "Enter the secret code: ";
    std::getline(std::cin, input_str);
    std::cout << std::endl;

    std::stringstream(input_str) >> code;

    std::vector<std::string> results = handshake::commands(code);

    for (const auto& action : results)
        std::cout << action << std::endl;

    return 0;
}
