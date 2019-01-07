#include <iostream>
#include <string>
#include "company.h"

int main(int argc, char *argv[]) {

    Company *c = new Company;
    std::cout << "id is " << c->get_id() << ", name is " << c->get_name() << std::endl;
    Company *c1 = new Company("ACME Mfg.");
    c1->set_name("ACME Manufacturing");
    std::cout << "id is " << c1->get_id() << ", name is " << c1->get_name() << std::endl;

    std::cout << "Compare c & c1 is " << (c == c1) << std::endl;

    delete c;
    delete c1;
    return 0;
}