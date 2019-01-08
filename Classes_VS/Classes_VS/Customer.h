#pragma once
#include <iostream>

class Customer {

	int id;
	std::string name;
	void set_id(const int &id);

public:
	int get_id() const;
	std::string get_name() const;
	void set_name(const std::string name);

	int operator==(Customer &c) const;

	Customer();
	~Customer();
};

