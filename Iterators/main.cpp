#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    vector<string> names = { "a", "b", "c" };
    for(auto name = names.begin(); name < names.end(); name++) 
        std::cout << *name << std::endl;
        
}