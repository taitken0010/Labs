//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int curr[5] = {50, 25, 10, 5, 1};
	int val;
	cout << "Enter an amount: ";
	cin >> val;
	for (int i = 0; i < 5; i++){
		while ( val >= curr[i]){
			val -= curr[i];
			cout << curr[i] << ' ';
		}
	}

	return 0;
}
