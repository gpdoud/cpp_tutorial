#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	vector<string> names = { "Greg", "Cindy", "Nick", "Ken", "Lauren", "Jada", "David", "Charlie" };
	for(string name : names) {
		cout << name << endl;
	}
}
