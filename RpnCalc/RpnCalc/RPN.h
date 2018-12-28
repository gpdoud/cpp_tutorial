#pragma once
#include <stack>
#include <string>

class RPN {
public:
	double Calc(char *terms[]);
	RPN();
	~RPN();
	void help();
private:
	double add(double arg1, double arg2);
	double sub(double arg1, double arg2);
	double mul(double arg1, double arg2);
	double div(double arg1, double arg2);
	double pow(double arg1, double arg2);
};

