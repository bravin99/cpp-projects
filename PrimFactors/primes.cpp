#include "primes.h"

std::vector<int> factors::factors_of(int n)
{
    std::vector<int> result;
    int prime = 2;

    while (n % prime == 0)
    {
        n /= prime;
        result.push_back(prime);
    }

    for (prime=3; n>1; prime+=2)
    {
        if (n%prime==0)
        {
            while (n%prime==0)
            {
                n /= prime;
                result.push_back(prime);
            }
        }
    }

    return result;
}
