#include <iostream>

void getInt(int& i) {
    i = 88;
}

/*
This function allocates free store (heap) memory
for an integer then passes it to another function
to initialize the value.
*/
void function_return_value() {

    int *i = new int;
    getInt(*i);
    std::cout << "i is " << *i << std::endl;
    delete i;
}