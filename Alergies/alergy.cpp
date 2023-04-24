#include "alergy.h"

using namespace std;

namespace alergy
{
    Alergy_Test::Alergy_Test(int n)
    {
        alergy_num = n;
    }

    bool Alergy_Test::is_alergic_to(string alergen)
    {
        if (((alergy_num & 1)==1) && (alergen=="eggs"))
            return true;
        if (((alergy_num & 2)==2) && (alergen=="peanuts"))
            return true;
        if(((alergy_num & 4) == 4) && (alergen=="shellfish"))
            return true;
        if (((alergy_num & 8)==8) && (alergen=="strawberries"))
            return true;
        if (((alergy_num & 16)==16) && (alergen=="tomatoes"))
            return true;
        if(((alergy_num & 32)==32) && (alergen=="chocolate"))
            return true;
        if(((alergy_num & 64)==64) && (alergen=="pollen"))
            return true;
        if(((alergy_num & 128)==128) && (alergen=="cats"))
            return true;
        return false;
    }

    unordered_set<string> Alergy_Test::alergies()
    {
        unordered_set<string> allergies;

        if (is_alergic_to("eggs"))
            allergies.insert("eggs");
        if(is_alergic_to("peanuts"))
            allergies.insert("peanuts");
        if(is_alergic_to("shellfish"))
            allergies.insert("shellfish");
        if(is_alergic_to("strawberries"))
            allergies.insert("strawberries");
        if(is_alergic_to("tomatoes"))
            allergies.insert("tomatoes");
        if(is_alergic_to("chocolate"))
            allergies.insert("chocolate");
        if(is_alergic_to("pollen"))
            allergies.insert("pollen");
        if(is_alergic_to("cats"))
            allergies.insert("cats");

        return allergies;
    }
}
