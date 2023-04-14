#include "prime_check/prime_check.h"
#include <cmath>
#include <stdexcept>

namespace prime_check
{

int
nth_prime (int n)
{
    if (n < 1)
        throw std::domain_error ("Invalid number detected");

    int base_number = 2;
    while (n - 1 > 0)
        {
            base_number += 1;
            if (check (base_number))
                {
                    n -= 1;
                }
        }
    return base_number;
}

bool
check (int n)
{
    if (int (std::sqrt (n)) * int (std::sqrt (n)) == n)
        return false;

    for (int i = 2; i <= std::sqrt (n); i++)
    {
        if (i * i > n)
            break;

        if(n%i==0)
            return false;
    }
    return true;
}

}
