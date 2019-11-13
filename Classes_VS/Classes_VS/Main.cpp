#include "pch.h"
#include <iostream>
#include <string>
#include "Customer.h"

int test_equality_operator() {

	Customer *cGreg = new Customer;
	cGreg->set_name("Greg");
	std::cout << "Customer name is " << cGreg->get_name() << std::endl;

	Customer *cGreg2 = new Customer;
	cGreg2->set_name("Greg");
	std::cout << "Customer name is " << cGreg2->get_name() << std::endl;

	Customer *cGregory = new Customer;
	cGregory->set_name("Gregory");
	std::cout << "Customer name is " << cGregory->get_name() << std::endl;

	std::cout << "Compare Greg & Greg2. Result is " << (cGreg == cGreg2) << std::endl;
	std::cout << "Compare Greg & Gregory. Result is " << (cGreg == cGregory) << std::endl;

	if(*cGreg == *cGreg2) {
		std::cout << "*cGreg & *cGreg2 compared equal" << std::endl;
	}
	return 0;
}

int test_access_modifier_override() {

}

int main() {
	test_access_modifier_override();
}