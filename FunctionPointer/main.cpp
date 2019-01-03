#include <iostream>

int add(const int p1, const int p2) {
    return p1 + p2;
}
int sub(const int p1, const int p2) {
    return p1 - p2;
}
int main(int argc, char *argv[]) {

    using func = int (*)(int, int); // function pointer
    func fn;
    int p1 = 5, p2 = 3;
    fn = add;
    std::cout << "sum is " << fn(p1, p2);
    fn = sub;
    std::cout << ", diff is " << fn(p1, p2) << std::endl;
}