#pragma once
#include <iostream>
#include <string>

class Account {

	int id;
	std::string desc;
	double bal;
	void set_id(int new_id) { id = new_id; }
	void set_bal(double new_bal);
	void chk_amt_lte_bal(double amt);
	void chk_amt_gt_zero(double amt);
public:

	int get_id();
	std::string get_desc();
	void set_desc(std::string new_desc);
	double get_bal();
	void deposit(double amt);
	void withdraw(double amt);
	std::string debug(std::string msg = "");

	Account();
	~Account();
};

