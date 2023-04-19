#include "say.h"

#include <array>
#include <cassert>
#include <stdexcept>
#include <cstdint>

namespace say
{
    std::string word(int n)
    {
        switch (n)
        {
            case  0: return "";
            case  1: return "one";
            case  2: return "two";
            case  3: return "three";
            case  4: return "four";
            case  5: return "five";
            case  6: return "six";
            case  7: return "seven";
            case  8: return "eight";
            case  9: return "nine";
            case 10: return "ten";
            case 11: return "eleven";
            case 12: return "twelve";
            case 13: return "thirteen";
            case 14: return "fourteen";
            case 15: return "fivteen";
            case 16: return "sixteen";
            case 17: return "seventeen";
            case 18: return "eighteen";
            case 19: return "nineteen";
            case 20: return "twenty";
            case 30: return "thirty";
            case 40: return "forty";
            case 50: return "fifty";
            case 60: return "sixty";
            case 70: return "seventy";
            case 80: return "eighty";
            case 90: return "ninety";
            case 100: return "hundred";
        }
        assert(false);
    }// end word function

    std::string in_english_to99(std::int64_t n)
    {
        assert(0<n && n<999);
        std::string result;
        if (n>=100)
        {
            result = word(n/100)+" hundred ";
            n %= 100;
        }
        if (n>20)
        {
            result += word(n-n%10);
            n %= 10;
            result += n ? '-' : ' ';
        }
        if (n>0) result += word(n) + ' ';

        return result;
    } // end in_english_to99

    std::string in_english(std::int64_t n)
    {
        if (n<0 || 1'000'000'000'000<=n)
            throw std::domain_error("Invalid Number");
        if (n==0)
            return "Zero";

        const std::array<std::pair<std::int64_t, const char *>, 4> number_sections
        {
            {
                {1'000'000'000, "billion "},
                {1'000'000, "million " },
                {1'000, "thousand "},
                {1, ""}
            }
        }; // end number sections

        std::string result;
        for (auto section : number_sections)
        {
            if (n >= section.first)
            {
                result += in_english_to99(n/section.first);
                result += section.second;
                n %= section.first;
            }
        }

        result.pop_back();
        return result;
    } // end in_english function

} // end namespace say
