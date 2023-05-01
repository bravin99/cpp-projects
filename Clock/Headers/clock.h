//
// Created by shumwe on 5/1/23.
//

#ifndef CLOCK_CLOCK_H
#define CLOCK_CLOCK_H

#include <string>

namespace dated
{
    class clock
    {
        int minutes;
        clock(int min);

    public:
        static clock at(int hours, int minutes);
        clock plus(int minutes) const;
        operator std::string() const;
        bool operator==(const clock& other) const;
        bool operator!=(const clock& other) const;
    };
}

#endif //CLOCK_CLOCK_H
