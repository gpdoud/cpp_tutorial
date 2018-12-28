#include "RPN.h"
#include <stack>
#include <string>
#include "Utility.h"

double RPN::Calc(char *terms[]) {

	std::stack<double> stack;
	int idx = 1;
	while(terms[idx] != NULL) {
		if(isNumber(terms[idx])) {
			double term = std::stod(terms[idx]);
			stack.push(term);
		} else if(isOperator(terms[idx])) {
			std::string sop = terms[idx];
			char op = sop.at(0);
			double arg2 = stack.top();
			stack.pop();
			double arg1 = stack.top();
			stack.pop();
			double result;
			switch(op) {
			case '+': result = add(arg1, arg2); break;
			case '-': result = sub(arg1, arg2); break;
			case '*': result = mul(arg1, arg2); break;
			case '/': result = div(arg1, arg2); break;
			case '@': result = pow(arg1, arg2); break;
			}
			stack.push(result);
		}
		idx++;
	}
	double answer = stack.top();
	stack.pop();
	return answer;
}
double RPN::add(double arg1, double arg2) {
	return arg1 + arg2;
}
double RPN::sub(double arg1, double arg2) {
	return arg1 - arg2;
}
double RPN::mul(double arg1, double arg2) {
	return arg1 * arg2;
}
double RPN::div(double arg1, double arg2) {
	return arg1 / arg2;
}
double RPN::pow(double arg1, double arg2) {
	return ::pow(arg1, arg2);
}
void RPN::help() {
	std::cout << "RPNCALC - RPN Calculator" << std::endl;
	std::cout << "    FORMAT: RpnCalc [args]" << std::endl;
	std::cout << "    Numbers are converted to doubles." << std::endl;
	std::cout << "    Supported operators are: + (add), - (subtract), * (multiply), / (divide), @ (power)" << std::endl;
	std::cout << "    Learning project by Greg Doud" << std::endl;
}

RPN::RPN() {}


RPN::~RPN() {}
