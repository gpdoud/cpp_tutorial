#include <iostream>
#include <memory>

int main() {

    {
        std::unique_ptr<int> pi = std::make_unique<int>();
        *pi = 88;
        std::cout << "*pi is " << *pi << std::endl;
    }
    {
        std::shared_ptr<int> pi2 = std::make_shared<int>();
        std::shared_ptr<int> pi3 { pi2 };
        *pi2 = 88;
        std::cout << "*pi3 is " << *pi3 << std::endl;
        pi2.reset();
        pi3.reset();
    }

}