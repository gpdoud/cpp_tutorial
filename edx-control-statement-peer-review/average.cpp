#include <iostream>
#include <array>

double average(const int size, const int iarr[]) {
    int total{ 0 };
    for(int idx = 0; idx < size; idx++) {
        total += iarr[idx];
    }
    return total / (double)size;
}

void test_average() {
    int ints[] = { 1, 2, 3, 4, 5 };
    double avg = average(5, ints);
    std::cout << "Average of 1, 2, 3, 4, 5 is " << avg << std::endl;
    int fib[] = { 1, 1, 2, 3, 5, 8, 13 };
    avg = average(7, fib);
    std::cout << "Average of 1, 1, 2, 3, 5, 8, 13 is " << avg << std::endl;
}