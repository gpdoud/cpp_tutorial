#include <iostream>
#include "Strings.h"

using namespace std;
using namespace dsi;

int main(int argc, char *argv[]) {
    string str = "123";
    Strings strs;
    int nbr = strs.str2int(str);
    cout << "The number plus 1 for string " << str << " is " << nbr+1 << endl;
}