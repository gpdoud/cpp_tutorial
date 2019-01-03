#include <iostream>

template <typename T> int greater(T t1, T t2) {
    if(t1 == t2) return 0;
    return (t1 > t2) ? 1 : -1;
}
int main() {

    std::cout << "1 & 2 : " << greater(1, 2) <<  std::endl;
    std::cout << "2 & 1 : " << greater(2, 1) <<  std::endl;
    std::cout << "2 & 2 : " << greater(2, 2) <<  std::endl;

    std::cout << "1.1 & 2.1 : " << greater(1.0, 2.0) <<  std::endl;
    std::cout << "2.2 & 1.2 : " << greater(2.0, 1.0) <<  std::endl;
    std::cout << "2.2 & 2.2 : " << greater(2.0, 2.0) <<  std::endl;
}