#include "multiples.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> factors = {3,5};
    int n = 100;

    int sum = sum_multiples::sum_of_multiples(factors, n);
    std::cout<<"The sum of multiples of "<<factors[0]<<" and "<<factors[1]<<" up to "<<n<<" is: "<<sum<<std::endl;

    return 0;
}
