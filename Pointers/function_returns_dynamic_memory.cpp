#include <iostream>

int *getDynamicInt(const int& i) {
    int *ip = new int { i };
    return ip;
}
void function_returns_dynamic_memory() {

    int *i = getDynamicInt(88);
    std::cout << "i is " << *i << std::endl;
    delete i;
}