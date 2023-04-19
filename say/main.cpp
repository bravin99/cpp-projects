#include "say.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    std::string input;
    std::int64_t number;

    while (true)
    {
        std::cout<<"Enter a number: ";
        std::getline(std::cin, input);
        stringstream(input) >> number;
        std::cout<<std::endl;

        std::string result = say::in_english(number);

        std::cout<<number<<": "<<result<<std::endl;
        std::cout<<"--------------"<<std::endl;
    }

    return 0;
}
