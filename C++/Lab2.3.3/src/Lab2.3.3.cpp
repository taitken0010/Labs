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
	unsigned long long x, y, z;
	cout<<"Enter an exponent: ";
	cin>>x;
	y=2;
	for (z=1;z<x;z++){
		y = (y * 2);
	}
	cout<<y;
	return 0;
}
