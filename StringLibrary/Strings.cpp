#include <iostream>
#include "Strings.h"

int dsi::Strings::str2int(string str) {
    string::size_type sz;
    int nbr = stoi(str, &sz);
    return nbr;
}