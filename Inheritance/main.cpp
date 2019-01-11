#include <iostream>
#include <stdexcept>
#include "account.h"

int main() {

    Account acct;
    acct.deposit(1000.00);
    std::cout << "Acct: Balance is " << acct.get_balance() << std::endl;
    acct.withdraw(200.00);
    std::cout << "Acct: Balance is " << acct.get_balance() << std::endl;
    acct.withdraw(100.00);    
    std::cout << "Acct: Balance is " << acct.get_balance() << std::endl;
    acct.withdraw(-1.00);    
    std::cout << "Acct: Balance is " << acct.get_balance() << std::endl;
}