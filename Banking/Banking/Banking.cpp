#include "pch.h"
#include <iostream>
#include <memory>
#include "Savings.h"
#include "Account.h"

void log(std::string msg) {
	std::cout << msg << std::endl;
}

int main() {
	std::cout << "Start Banking ..." << std::endl;

	std::unique_ptr<Savings> s1 = std::make_unique<Savings>();
	log(s1->debug("new sv"));
	s1->deposit(250);
	log(s1->debug("deb 250"));
	s1->withdraw(100);
	log(s1->debug("wdr 100"));
	s1->set_int_rate(0.1);
	log(s1->debug("set intrate"));

	//
	std::unique_ptr<Account> a1 = std::make_unique<Account>();
	a1->set_desc("1st Account");
	a1->deposit(1000);
	log(a1->debug("dep 1000"));
	a1->deposit(500);
	log(a1->debug("dep 500"));
	a1->withdraw(250);
	log(a1->debug("wdr 250"));
	//
	std::cout << "End Banking ..." << std::endl;
}
