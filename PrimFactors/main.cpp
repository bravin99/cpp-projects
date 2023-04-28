#include "primes.h"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    std::string inputs;
    std::vector<int> number_factors;
    int number;

    while (true)
    {
        std::cout<<"Enter a number: ";
        std::getline(std::cin, inputs);
        std::stringstream(inputs)>>number;
        std::cout<<std::endl;

        number_factors = factors::factors_of(number);

        for (auto num : number_factors)
        {
            std::cout<<num<<std::endl;
        }
    }

    return 0;
}
