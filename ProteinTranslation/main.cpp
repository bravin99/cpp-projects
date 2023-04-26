#include "protein.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    std::string rna;
    std::vector<std::string> translated_proteins;

    while(true)
    {
        std::cout << "Enter RNA sequence: ";
        std::getline(cin,rna);
        std::cout<<std::endl;

        translated_proteins = proteins::translate(rna);
        for (auto p : translated_proteins)
            std::cout<<p<<std::endl;
    }

    return 0;
}
