#include <stdexcept>
#include "account.h"

void Account::deposit(double amount) {
    if(amount <= 0) {
        throw "Amount must be GTE zero";
    }
    balance += amount;
}
void Account::withdraw(double amount) {
    if(amount <= 0) {
        throw std::logic_error("Amount must be positive");
    }
    if(amount >= balance) {
        throw std::range_error("Insufficient funds");
    }
    balance -= amount;
}
double Account::get_balance() {
    return balance;
}

Account::Account(): id{ 0 }, description { "New" }, balance { 0.0 } {
}