#include "Headers/meetup.h"
#include <iostream>
#include "boost/date_time/gregorian/gregorian.hpp"

using namespace std;
using namespace boost::gregorian;

int main() {
    meetup::scheduler s(1, 2023);
    std::cout << "The first Monday of January 2017: " << std::endl;
    std::cout << "The third Tuesday of January 2017: " << std::endl;
    std::cout << "The wednesteenth of January 2017: " << std::endl;
    std::cout << "The last Thursday of January 2017" << std::endl;

    return 0;
}
