#ifndef company
#define company

#include <iostream>

class Company {
    static int nextId;
    int id;
    std::string name;
    void set_id(const int id);
public:
    int get_id() const;
    std::string get_name() const;
    void set_name(const char *name);
    Company();
    Company(const char *name);
    int operator==(const Company &c);
};

#endif