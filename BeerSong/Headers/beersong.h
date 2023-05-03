#ifndef BEERSONG_BEERSONG_H
#define BEERSONG_BEERSONG_H

#include <string>

namespace BeerSong
{
    std::string verse(int v);
    std::string sing(int from, int to=0);

    const std::string Bottles {" bottles of beer"};
    const std::string Bottle {" bottle of beer"};
    const std::string Wall {" on the wall"};
    const std::string Pass {" down and pass it around"};
    const std::string Take {" Take"};
    const std::string Store {"Go to the store and bu some beer"};
}

#endif //BEERSONG_BEERSONG_H
