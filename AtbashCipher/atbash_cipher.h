#ifndef ATBASHCIPHER_ATBASH_CIPHER_H
#define ATBASHCIPHER_ATBASH_CIPHER_H

#include <string>

using std::string;
namespace atbash
{
    string encode(string decoded, bool include_spaces=true);
    string decode(string encoded);
}

#endif //ATBASHCIPHER_ATBASH_CIPHER_H
