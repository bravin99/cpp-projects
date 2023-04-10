#include <iostream>
#include <string>
#include <map>
#include <stdexcept>

//calculating nucleotides
std::map<char, int> count(const std::string& data)
{
    std::map<char, int> tracker
    {
        {'A', 0},
        {'C', 0},
        {'G', 0},
        {'T', 0}
    };

    for (char c : data)
    {
        // check if character is in map
        if (tracker.find(c) == tracker.end())
            //throw an error on the first invalid character
            throw std::invalid_argument("Invalid Letter detected: "+ std::string{c});
        //increment the count if the character is found
        tracker.at(c)++;
    }
    return tracker;
}

int main(int argc, char **argv) {
    //initialize the dna sequence
    std::string mySequence = "GATTACA";
    // std::cout<<"Enter the DNA sequence: ";
    // std::getline(std::cin,mySequence);

    // initialize variable for the end result and assign returned data from the count function
    std::map<char,int> nucleotides = count(mySequence);

    for (auto const&  n : nucleotides)
        std::cout<<n.first<<": "<<n.second<<std::endl;
    return 0;
}
