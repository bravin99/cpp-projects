#include "CustomHeaders/sieve.h"
#include <iostream>

int main()
{
    std::vector<int> primes = sieve::prime_numbers(90);
    for (auto prime : primes)
        std::cout<<prime<<", ";

    std::cout<<std::endl;
    return 0;
}
