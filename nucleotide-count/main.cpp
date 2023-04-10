#include <iostream>
#include <string>
#include <map>
#include <stdexcept>

//calculating nucleotides

std::map<char, int> count(const std::string& data)
{
    std::map<char, int> tracker
    {
        {'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}
    };

    for (char c : data)
    {
        if (tracker.find(c) == tracker.end())
            throw std::invalid_argument("Invalid Letter detected: "+ std::string{c});
        tracker.at(c)++;
    }
    return tracker;
}

int main(int argc, char **argv) {
    std::string mySequence = "GATTACA";
    std::map<char,int> nucleotides;
    // std::cout<<"Enter the DNA sequence: ";
    // std::getline(std::cin,mySequence);
    nucleotides = count(mySequence);

    for (auto const&  n : nucleotides)
        std::cout<<n.first<<": "<<n.second<<std::endl;
    return 0;
}
