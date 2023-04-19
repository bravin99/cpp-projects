#ifndef SAY_H_INCLUDED
#define SAY_H_INCLUDED

#include <cstdint>
#include <string>

namespace say
{
    std::string word(int n);
    std::string in_english_to99(std::int64_t n);
    std::string in_english(std::int64_t n);
}


#endif // SAY_H_INCLUDED
