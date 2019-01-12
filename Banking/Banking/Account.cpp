#include "pch.h"
#include "Account.h"
#include <stdexcept>

int Account::get_id() { return id; }

std::string Account::get_desc() { return desc; }
void Account::set_desc(std::string new_desc) { desc = new_desc; }

double Account::get_bal() { return bal; }
void Account::set_bal(double new_bal = 0) { bal = new_bal; }

void Account::deposit(double amt) {
	chk_amt_gt_zero(amt);
	set_bal(get_bal() + amt);
}

void Account::withdraw(double amt) {
	chk_amt_gt_zero(amt);
	chk_amt_lte_bal(amt);
	set_bal(get_bal() - amt);
}

void Account::chk_amt_lte_bal(double amt) {
	if(amt > Account::get_bal())
		throw new std::runtime_error("Insufficient funds");
}

void Account::chk_amt_gt_zero(double amt) {
	if(amt <= 0)
		throw new std::range_error("Amt must be GT zero");
}

std::string Account::debug(std::string msg) {
	std::string message{ msg };
	message.append(" id(");
	message.append(std::to_string(get_id()));
	message.append(") desc(");
	message.append(get_desc());
	message.append(") bal(");
	message.append(std::to_string(get_bal()));
	message.append(")");
	return message;
}

Account::Account() : id{ 0 }, desc{ "new acct" }, bal{ 0.0 } {
}
Account::~Account() { 
	std::cout << "Account destructor executed."; 
}
