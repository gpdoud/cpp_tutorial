#include <iostream>

void the_switch(const char ch) {
    switch(ch) {
        case 'y':
        case 'Y':
            std::cout << "You chose y or Y" << std::endl;
            break;
        case 'n':
        case 'N':
            std::cout << "You chose n or N" << std::endl;
            break;
        default:
            std::cout << "You didn't chose a valid option" << std::endl;
            break;
    }
}