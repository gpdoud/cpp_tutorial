#include "pch.h"
#include <iostream>

float avg(int[]);

int main() {

	int ints[5] = { 1, 2, 3, 4, 5 };
	auto answer = avg(ints);
	std::cout << "Avg=" << answer << std::endl;
}
