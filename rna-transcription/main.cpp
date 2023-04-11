#include <iostream>
#include <map>
#include <string>
#include <stdexcept>

namespace rna_transcription
{
    std::map<char, char> dna_rna_pairs ={
    {'C', 'G'}, {'G', 'C'}, {'A','U'}, {'T', 'A'},
    };

    void ensure_validity(char n)
    {
        if (n != 'A' && n != 'C' && n != 'G' && n != 'T')
            throw std::invalid_argument{"Character doest not represent a valid nucleotide"};
    }

    char convert_to_rna(char c)
    {
        ensure_validity(c);
        return dna_rna_pairs.at(c);
    }

    std::string convert_to_rna(std::string nucleotides)
    {
        std::string rna = "";
        for (char nucleotide : nucleotides)
            rna += convert_to_rna(nucleotide);
        return rna;
    }
}

int main(int argc, char **argv) {
    std::string dna = "GCATTCAGC";
    std::string rna = rna_transcription::convert_to_rna(dna);
    std::cout<<"DNA: "<<dna<<" --> RNA: "<<rna<<std::endl;
    return 0;
}
