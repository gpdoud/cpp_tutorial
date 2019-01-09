#include <iostream>

double calc_sine(const double opposite, const double hypodenuse) {
    return opposite / hypodenuse;
}

void test_calc_sine() {
    std::cout << "calc_sine(4.0, 2.0)=" << calc_sine(4.0, 2.0) << std::endl;
}