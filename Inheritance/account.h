

#include <string>

class Account {
private:
    int id;
    std::string description;
    double balance;
public:
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();
    Account();
};
