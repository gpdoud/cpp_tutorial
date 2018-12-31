#include <iostream>
#include <cmath>
#include "Calc.h"

using namespace std;

int Calc::Calculate(int arg1, char op, int arg2) {

	switch(op) {
	case '+': return arg1 + arg2; break;
	case '-': return arg1 - arg2; break;
	case '*': return arg1 * arg2; break;
	case '/': return arg1 / arg2; break;
	case '%': return arg1 % arg2; break;
	case '~': return pow(arg1, arg2); break;
	default:
		cout << "Invalid operator." << endl;
	}
	return 0;
}

Calc::Calc() {}


Calc::~Calc() {}
