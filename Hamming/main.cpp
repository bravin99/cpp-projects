#include "hamming.h"
#include <iostream>

using namespace hamming;

int main() {
    std::string s1 = "GAGCCTACTAACGGGAT";
    std::string s2 = "CATCGTAATGACGGCCT";

    //std::cout<<s1<<", "<<s2;
    int res = compute(s1, s2);
    std::cout<<res;

    return 0;
}
