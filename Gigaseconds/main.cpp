#include <iostream>
#include "gigasecond.h"
#include "boost/date_time/posix_time/posix_time.hpp"
#include <sstream>

using namespace std;
using namespace gigasec;

int main()
{
    using namespace boost::posix_time;

    ptime time_now = second_clock::local_time();

    try
    {
        ptime result = gigasec::secs(time_now);
        cout << result << endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() <<std::endl;
        return 1;
    }

    return 0;
}
