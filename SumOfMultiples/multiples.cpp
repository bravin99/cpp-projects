#include "multiples.h"
#include <algorithm>
#include <vector>

int sum_multiples::sum_of_multiples(const std::vector<int> &factors, int n)
{
    int sum = 0;

    for (int i=0; i<n; i++)
    {
        if (std::any_of(factors.cbegin(), factors.cend(), [&i](const int f)
                        { return f > 0 && i % f == 0; }))
                        {
            sum += i;
        }
    }

    return sum;
}
