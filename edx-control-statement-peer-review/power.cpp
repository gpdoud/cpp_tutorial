#include <iostream>

void power(const int base, const int exp) {

    int result{base};
    for(int idx{1}; idx < exp; idx++) {
        result *= base;
    }
    std::cout << base << "^" << exp << "=" << result << std::endl;
}