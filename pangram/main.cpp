#include <iostream>
#include <string>
#include <locale>
#include <set>

using namespace std;

bool is_pangram(const string &phrase)
{
    set<char> s;
    for (auto &c : phrase)
    {
        char l = tolower(c, std::locale::classic());

        if (isalpha(l, std::locale::classic()))
            s.insert(l);
    }
    return s.size() == 26;
}

int main(int argc, char **argv) {
    string p;
    cout<<"Enter your phrase: "<<endl;
    cin>>p;

    bool pangram = is_pangram(p);

    if (pangram == true)
        cout<<"Your phrase is a pangram"<<endl;
    else
        cout<<"Your phrase is not a pangram"<<endl;

    return 0;
}
