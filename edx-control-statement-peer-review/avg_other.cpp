#include <iostream>
#include <array>
using namespace std;

float avg(int input[])
{
    float average = 0;
    for (int i = 0; i < sizeof(input); i++) {
    average += (float)input[i];

    }
    average = average / (float)sizeof(input);
    return average;
}

void test_avg()
{
    int average[5] = { 1, 2, 3, 4, 5 };
    float result = avg(average);
    cout << result;
}