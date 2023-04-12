#include <iostream>

namespace collatz
{
    int tread(int val)
    {
        int steps = 0; // keep count

        if (val <= 0)
            throw std::domain_error("The value is out of acceptable range");

        while (val != 1)
        {
            if (val%2 == 0)
            {
                val = val/2;
                steps++;
            }
            else
            {
                val = (3 * val) +1;
                steps++;
            }
            std::cout<<steps<<". "<<val<<std::endl;
        }
        return steps;
    }
}

int main(int argc, char **argv) {
    int n = 12; //= 12;
     std::cout<<"Enter a number: ";
    std::cin>>n;
    std::cout<<std::endl;
    int steps = collatz::tread(n);
    std::cout<<"Total steps: "<<steps<<std::endl;
    return 0;
}
