#include "trinary.h"
#include <iostream>
#include <string>


int main() {
    std::string tr = "012";
    int decimal_value = trinary::to_decimal(tr);

    std::cout << "Trinary string: " << tr << std::endl;
    std::cout << "Result (Decimal): " << decimal_value << std::endl;

    return 0;
}
