#include "difference_of_squares.h"
#include <cmath>
#include <iostream>

namespace difference_of_squares
{
        double square_sum(int n)
        {
            return pow((n/2)*(n-(n-1)+n), 2);
        }

    double sum_square(int n)
    {
        return (n * (n+1)*((2*n)+1))/6;
    }

    double double calc_diff(int n)
    {
        return square_sum(n) - sum_square(n);
    }
}
