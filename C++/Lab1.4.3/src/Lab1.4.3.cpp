//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float v=2;
	float result = (v + 1) * 2;
	std::cout << "result: " << result << " expected result : 6" << std::endl;
	result = (v + 1) * (v + 2) * 2;
	std::cout << "result: " << result << " expected result : 24" << std::endl;
	result = (v - 1) * 2 + 2 * 2;
	std::cout << "result: " << result << " expected result : 6" << std::endl;
	result = (v + v) * (v + v) * 2;
	std::cout << "result: " << result << " expected result : 32" << std::endl;
	result = (int)v % 2 * (v + 2) * 2;
	std::cout << "result: " << result << " expected result : 0" << std::endl;
	return 0;
}
