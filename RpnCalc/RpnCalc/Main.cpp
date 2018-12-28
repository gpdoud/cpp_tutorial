#include <iostream>
#include <string>
#include "RPN.h"
#include "Utility.h"

int main(int argc, char *argv[]) {

	RPN rpn;
	if(argc < 2) {
		rpn.help();
		return 1;
	}
	double result = rpn.Calc(argv);
	std::cout << "Result is " << result << std::endl;
	return 0;

}