#include "company.h"

int Company::nextId = 1;

int Company::get_id() const {
    return this->id;
}
void Company::set_id(const int id) {
    this->id = id;
}

std::string Company::get_name() const {
    return this->name;
}
void Company::set_name(const char *name) {
    this->name = name;
}

Company::Company() {
    this->set_id(Company::nextId++);
    this->set_name("*New Company*");
}

Company::Company(const char *name) : Company() {
    this->set_name(name);
}

int Company::operator==(const Company &c) {
    //return this->get_name().compare(c.get_name());
    return 999;
}