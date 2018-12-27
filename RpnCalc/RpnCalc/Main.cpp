#include <iostream>
#include <string>
#include "RPN.h"
#include "Utility.h"

using namespace std;

int main(int argc, char *argv[]) {

	RPN rpn;
	int result = rpn.Calc(argv);
	cout << "Result is " << result << endl;
	return 0;

}