#pragma once
#include <stack>
#include <string>

using namespace std;

class RPN {
public:
	int Calc(char *terms[]);
	RPN();
	~RPN();
private:
	int add(int arg1, int arg2);
	int sub(int arg1, int arg2);
	int mul(int arg1, int arg2);
	int div(int arg1, int arg2);
};

