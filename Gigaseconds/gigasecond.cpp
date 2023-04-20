#include "gigasecond.h"

namespace gigasec
{
    using boost::posix_time::ptime;
    using boost::posix_time::seconds;

    ptime secs(const ptime & point_A)
    {
        const seconds one_gigsecond(long(1e9));

        return point_A + one_gigsecond;
    }
}
