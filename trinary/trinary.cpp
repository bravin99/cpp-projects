#include "trinary.h"

namespace trinary
{
    [[nodiscard]] int to_decimal(std::string_view str) noexcept
    {
        int result = 0;
        for (auto c : str)
        {
            if (c < '0' || c > '2')
                return 0;
            result = result*3 + (c-'0');
        }
        return result;
    }
}