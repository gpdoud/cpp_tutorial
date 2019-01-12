#pragma once
#include "Account.h"
class Savings :
	public Account {

	double int_rate;

public:

	double get_int_rate();
	void set_int_rate(double new_int_rate);

	std::string debug(std::string msg);

	Savings();
	~Savings();
};

