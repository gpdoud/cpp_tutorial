#include <iostream>
#include <string>
#include "Calc.h"

using namespace std;

void usage() {
	cout << endl;
	cout << "Calc.exe arg1 op arg2" << endl;
	cout << "where arg1 and arg2 are integers" << endl;
	cout << " and op is +, -, *, /, % (modulus), ~ (power)" << endl;
}
int main(int argc, char *argv[]) {

	if(argc != 4) {
		cout << "argc is " << argc << endl;
		usage();
		return 1;
	}
	int arg1 = atoi(argv[1]);
	string op = argv[2];
	if(op.length() != 1) {
		cout << "op must be a single character." << endl;
		return 1;
	}
	int arg2 = atoi(argv[3]);
	Calc calc;
	int result = calc.Calculate(arg1, op.at(0), arg2);
	cout << "Result is " << result << endl;

	return 0;

}