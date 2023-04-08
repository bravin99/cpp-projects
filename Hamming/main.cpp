#include <iostream>
#include <string>
#include <stdexcept>
#include <numeric>
#include <functional>

//using namespace std;
 int compute(const std::string & s1, const std::string & s2)
{
    if (s1.size() != s2.size())
        throw std::domain_error("Size mismatch");
    return std::inner_product(begin(s1), end(s1), begin(s2), 0, std::plus<int>{}, std::not_equal_to<int>{});
}

int main() {
    std::string s1 = "GAGCCTACTAACGGGAT";
    std::string s2 = "CATCGTAATGACGGCCT";

    //std::cout<<s1<<", "<<s2;
    int res = compute(s1, s2);
    std::cout<<res;

    return 0;
}
