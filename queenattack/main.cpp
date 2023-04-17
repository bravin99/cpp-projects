#include "attack.h"
#include <iostream>

using namespace std;

int main()
{
    queen_attack::board myBoard({0, 3}, {7, 3});
    cout << static_cast<string>(myBoard) << endl;
    cout<<"Can white queen attack black queen? "<<boolalpha<<myBoard.can_attack()<<endl;
    return 0;
}
