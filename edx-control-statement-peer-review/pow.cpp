#include <iostream>

int pow(const int base, const unsigned int exp) {
    if(exp == 0)
        return 1;
    int result = 1;
    for(int idx = 0; idx < exp; idx++ ) {
        result *= base;
    }
    return result;
}

void testPow() {
    std::cout << "pow(2,3)=" << pow(2,3) << std::endl;
}