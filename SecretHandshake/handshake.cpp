#include "handshake.h"

#include <algorithm>
#include <array>
#include <string_view>
#include <vector>

namespace handshake
{
    const std::array<std::string_view, 4> actions
    {
        "Wink", "Double Blink", "Close Your Eyes", "Jump"
    };

    std::vector<std::string> commands(const unsigned int code)
    {
        std::vector<std::string> do_actions;
        for (unsigned  int i{0}; i<actions.size(); ++i)
            {
                if (code & (1U << i))
                    do_actions.emplace_back(actions[i]);

                if (code & (1U << actions.size()))
                    std::reverse(do_actions.begin(), do_actions.end());
            }

        return do_actions;
    }
}
