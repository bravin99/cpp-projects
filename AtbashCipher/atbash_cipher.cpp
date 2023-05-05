#include "atbash_cipher.h"
#include <iostream>
#include <utility>

namespace atbash
{
    string encode(string decoded, bool include_spaces)
    {
        string letters = "abcdefghijklmnopqrstuvwxyz";
        string digits = "0123456789";
        string output;
        int length = 0;
        for (const char& c : decoded)
        {
            if (digits.find(c) != string::npos)
            {
                if (include_spaces && length != 0 && length%5 == 0)
                    output += " ";
                output += c;
            } else if (letters.find(tolower(c)) != string::npos)
            {
                if (include_spaces && length != 0 && length%5 == 0)
                    output += " ";
                output += letters[25-letters.find(tolower(c))];
            } else {
                continue;
            }
            length++;
        }
        return output;
    }

    string decode(string encoded)
    {
        return encode(std::move(encoded), false);
    }
}