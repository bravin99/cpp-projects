#include <iostream>
#include <cmath>

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

        double calc_diff(int n)
        {
            return square_sum(n) - sum_square(n);
        }
}

int main(int argc, char **argv) {
    using namespace difference_of_squares;
    int base = 10;
    // std::cout<<"Enter a base number: ";
    // std::cin>>base;
    double diff = calc_diff(base);
    std::cout<<"Differrence: "<<diff<<std::endl;

    return 0;
}
