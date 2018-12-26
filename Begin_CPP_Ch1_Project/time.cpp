#include <iostream>
#include <ctime>

using namespace std;

void print_time() {
    time_t now = time(nullptr);
    cout << ", the time and date are " << ctime(&now) << endl;
}