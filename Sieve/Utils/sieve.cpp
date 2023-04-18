#include "../CustomHeaders/sieve.h"

#include <bitset>
#include <algorithm>
#include <iostream>

namespace sieve
{
    std::vector<int> prime_numbers(int limit)
    {
        std::vector<bool> composite(limit-1, true);

        for (size_t i=0; i<composite.size(); ++i)
        {
            if (composite[i])
            {
                for (size_t j=j+1; j<composite.size(); ++j)
                {
                    if (composite[j])
                        composite[j] = (2+j)%(2+i) != 0;
                }
            }
        }

        std::vector<int> primes;
        for (size_t i=0; i<composite.size(); ++i)
        {
            if (composite[i])
                primes.push_back(i+2);
        }

        return primes;
    }
} // sieve namespace end
