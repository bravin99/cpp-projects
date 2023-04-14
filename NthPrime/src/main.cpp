#include <iostream>
#include "prime_check/prime_check.h"

using namespace std;

int main()
{
    int n = 12;
    std::cout<<"Enter N: ";
    std::cin >> n;

    int nth_prime = prime_check::nth_prime (n);

    std::cout<<"\nNth prime of "<<n<<" is: "<<nth_prime<<std::endl;
    return 0;
}
