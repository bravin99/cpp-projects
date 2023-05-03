#include "beersong.h"
#include <string>

namespace BeerSong
{
    std::string verse(int v)
    {
        std::string str {};
        std::string nb {std::to_string(v)};
        std::string nbMinus {std::to_string(v-1)};

        switch (v) {
            case 0:
                str += "No more" + Bottles + Wall + ", no more" + Bottles;
                str += Store + ", 99" + Bottles + Wall;
                break;
            case 1:
                str += nb + Bottle + Wall + ", " + nb + Bottle;
                str += Take + " it " + Pass + ", no more" + Bottles + Wall;
                break;
            case 2:
                str += nb + Bottles + Wall + ", " + nb + Bottles;
                str += Take + " one " + Pass + ", " + nbMinus + Bottle + Wall;
                break;
            default:
                str += nb + Bottles + Wall + ", " + nb + Bottles;
                str += Take + " one " + Pass + ", " + nbMinus + Bottles + Wall;
        }
        return str;
    }

    std::string sing(int from, int to)
    {
        std::string song {};
        for (auto i {from}; i>=to; --i)
        {
            song += verse(i);
            if (i != to)
                song += "\n";
        }
        return song;
    }
}