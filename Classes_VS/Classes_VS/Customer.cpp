#include "pch.h"
#include "Customer.h"

int Customer::get_id() const {
	return this->id;
}
void Customer::set_id(const int &id) {
	this->id = id;
}
std::string Customer::get_name() const {
	return this->name;
}
void Customer::set_name(const std::string name) {
	this->name = name;
}

int Customer::operator==(Customer &c) const {
	return this->get_name().compare(c.get_name());
}

Customer::Customer() {}
Customer::~Customer() {}
