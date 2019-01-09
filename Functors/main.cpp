#include <iostream>
#include "functor.h"

int main() {

    Multiplier dbl(2);
    std::cout << "Double 3 is " << dbl(3) << std::endl;
    Multiplier tpl(3);
    std::cout << "Triple 5 is " << tpl(5) << std::endl;
}