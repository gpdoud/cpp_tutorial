#include <iostream>

void references() {

    // a reference is another name for a variable
    // both point to the same value
    int i = 88;
    int &ri = i;
    std::cout << "i is " << i << ", and ri is " << ri << std::endl;

    // a reference is can be used to change items in a for loop
    std::string names[] = { "Greg", "Cindy", "Nick", "Ken" };
    // here name is a const char * (a copy) of the item
    // that cannot be changed
    for(std::string name : names) {
        // name[0] = "X"; // -- compile error
        std::cout << name << " ";
    }
    std::cout << std::endl;
    // but a reference can be used
    // then the item in the array can be changed
    for(std::string &name : names) {
        name.append("_");
    }
    for(std::string name : names) {
        std::cout << name << " ";
    }
    std::cout << std::endl;

    
}