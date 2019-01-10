#include "pch.h"
#include <iostream>
#include <array>
using namespace std;

float avg(int input[]) {
	float average = 0;
	for(int i = 0; i < sizeof(input); i++) {
		average += (float)input[i];

	}
	average = average / (float)sizeof(input);
	return average;
}