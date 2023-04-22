#ifndef ALERGY_H_INCLUDED
#define ALERGY_H_INCLUDED

#include <unordered_set>
#include <string>

using namespace std;

namespace alergy
{
    class Alergy_Test
    {
    private:
        int alergy_num;

    public:
        Alergy_Test(int);
        bool is_alergic_to(string);
        unordered_set<string> alergies();
    };
}

#endif // ALERGY_H_INCLUDED
