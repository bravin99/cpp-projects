#include "protein.h"

namespace proteins
{
    std::vector<std::string> translate(std::string rna)
    {
        std::vector<std::string> result;

        for (size_t i=0; i<rna.size(); i+=3)
        {
            std::string codon = rna.substr(i,3);

            if (codon == "AUG")
                result.push_back("Methionine");
            else if(codon == "UUU" || codon == "UUC")
                result.push_back("Phenylalanine");
            else if(codon == "UUA" || codon == "UUG")
                result.push_back("Leucine");
            else if(codon == "UCU" || codon == "UCC" || codon == "UCA" || codon == "UCG")
                result.push_back("Serine");
            else if(codon == "UAU" || codon == "UAC")
                result.push_back("Tyrosine");
            else if(codon == "UGU" || codon == "UGC")
                result.push_back("Cysteine");
            else if(codon == "UGG")
                result.push_back("Tryptophan");
            else if(codon == "UAA" || codon == "UAG" || codon == "UGA")
                break;
        }
        return result;
    }
}
