#include "pch.h"
#include "Savings.h"

double Savings::get_int_rate() { return int_rate; }
void Savings::set_int_rate(double new_int_rate) { 
	int_rate = new_int_rate; 
}

std::string Savings::debug(std::string msg) {
	std::string message = Account::debug(msg);
	message.append(" rate(");
	message.append(std::to_string(get_int_rate()));
	message.append(")");
	return message;
}

Savings::Savings() : Account(), int_rate{ 0.01 } {}
Savings::~Savings() {}
