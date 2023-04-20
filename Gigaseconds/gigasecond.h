#ifndef GIGASECOND_H_INCLUDED
#define GIGASECOND_H_INCLUDED

#include "boost/date_time/posix_time/posix_time.hpp"

namespace gigasec
{
    using boost::posix_time::ptime;

    ptime secs(const ptime &);
}

#endif // GIGASECOND_H_INCLUDED
