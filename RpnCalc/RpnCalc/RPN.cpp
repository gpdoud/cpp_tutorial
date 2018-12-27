#include "RPN.h"
#include <stack>
#include <string>
#include "Utility.h"

using namespace std;

int RPN::Calc(char *terms[]) {

	stack<int> stack;
	int idx = 1;
	while(terms[idx] != NULL) {
		if(isNumber(terms[idx]))
			stack.push(atoi(terms[idx]));
		if(isOperator(terms[idx])) {
			string sop = terms[idx];
			char op = sop.at(0);
			int arg2 = stack.top();
			stack.pop();
			int arg1 = stack.top();
			stack.pop();
			int result;
			switch(op) {
			case '+': result = add(arg1, arg2); break;
			case '-': result = sub(arg1, arg2); break;
			case '*': result = mul(arg1, arg2); break;
			case '/': result = div(arg1, arg2); break;
			}
			stack.push(result);
		}
		idx++;
	}
	int answer = stack.top();
	stack.pop();
	return answer;
}
int RPN::add(int arg1, int arg2) {
	return arg1 + arg2;
}
int RPN::sub(int arg1, int arg2) {
	return arg1 - arg2;
}
int RPN::mul(int arg1, int arg2) {
	return arg1 * arg2;
}
int RPN::div(int arg1, int arg2) {
	return arg1 / arg2;
}

RPN::RPN() {}


RPN::~RPN() {}
