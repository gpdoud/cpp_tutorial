#include <iostream>
#include <string>

bool isNumber(char *arg) {

	std::string sarg = arg;
	for(int idx = 0; idx < sarg.length(); idx++) {
		char ch = sarg.at(idx);
		if(!isdigit(ch) && ch != '.' && ch != '-') {
			return false;
		}
	}
	return true;
}
bool isOperator(char *arg) {
	std::string sarg = arg;
	if(sarg.length() != 1)
		return false;
	switch(sarg.at(0)) {
	case '+': // addition
	case '-': // subtraction
	case '*': // multiplication
	case '/': // division
	case '@': // power
		return true;
	}
	return false;
}