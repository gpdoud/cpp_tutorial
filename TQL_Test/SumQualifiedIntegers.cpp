
#include <iostream>

using namespace std;

// Sum the number from 1 to N (exclusive) but only
// those numbers evenly divisible by 3 or 5
// N is passed in on the command line
int main(int argc, char *argv[]) {

    // string nStr = argv[1];
    int N = 10;
    int total = 0; 
    for(int idx = 1; idx < N; idx++) {
        if(idx % 3 == 0 || idx % 5 == 0) {
            total += idx;
        }
    }
    cout << "For N of " << N << ", the sum is " << total << endl;
}

