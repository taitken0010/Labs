//============================================================================
// Name        : 7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	unsigned long long fib1=0, fib2=1, fib3=1;
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	for (int q=0;q<n;q++){
		fib1 = fib2;
		fib2 = fib3;
		fib3 = fib1 + fib2;
	}
	cout<<" "<<fib1;
	return 0;
}
