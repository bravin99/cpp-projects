#include <iostream>

using namespace std;

string two_fer(string Name)
{
    string result;

    if (Name == "")
        result = "One for you, one for me.";
    else
        result = "One for "+Name+", one for me.";

    return result;
}

int main(int argc, char **argv) {
    string n = "";
    cout<<"Customer name (Press enter for no name): ";
    getline(cin,n);
    cout<<endl;

    cout<<two_fer(n)<<endl;


    return 0;
}
