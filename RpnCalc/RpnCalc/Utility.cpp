#include <iostream>
#include <string>

using namespace std;

bool isNumber(char *arg) {

	string sarg = arg;
	for(int idx = 0; idx < sarg.length(); idx++) {
		if(!isdigit(sarg.at(idx))) {
			return false;
		}
	}
	return true;
}
bool isOperator(char *arg) {
	string sarg = arg;
	if(sarg.length() != 1)
		return false;
	switch(sarg.at(0)) {
	case '+':
	case '-':
	case '*':
	case '/':
		return true;
	}
	return false;
}