//
// Created by shumwe on 5/1/23.
//

#include "clock.h"
#include <sstream>
#include <iomanip>

namespace dated
{
    clock::clock(int min) {
        min %= 24*60;
        minutes = min>=0 ? min : min+1440;
    }

    clock clock::at(int hours, int minutes) {
        return clock(hours*60 + minutes);
    }

    clock clock::plus(int minutes) const {
        return clock(this->minutes+minutes);
    }

    clock::operator std::string() const {
        std::stringstream ss;
        ss << std::setfill('0') << std::setw(2) << minutes/60 << ":" << std::setw(2) << minutes%60;
        return ss.str();
    }

    bool clock::operator==(const dated::clock &other) const {
        return minutes==other.minutes;
    }

    bool clock::operator!=(const dated::clock &other) const {
        return minutes!=other.minutes;
    }
}