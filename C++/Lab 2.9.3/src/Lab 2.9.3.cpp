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
	int vector[] = {1, 7, 3, 8, 3, 7, 1};
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);
	int idxlow = 0, idxhi = n - 1;
	for (int i = 0; i < n/2; i++){
		if (vector[idxlow] != vector [idxhi]){
			ispalindrome = false;
	}
		else {
			idxlow++;
			idxhi--;
		}
	}
	if(ispalindrome)
		cout << "It is a palindrome";
	else
		cout << "It isn't a palindrome";
	cout << endl;
	return 0;
}
