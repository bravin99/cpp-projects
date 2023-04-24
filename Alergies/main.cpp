#include "alergy.h"
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    alergy::Alergy_Test test(55);
    unordered_set<string> allergies = test.alergies();

    cout << "The person is allergic to: " << endl;
    for (const auto& allergen : allergies)
        cout << "- " <<allergen << endl;

    return 0;
}
