//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

int main() {
	int x, z;
	cout<<"Enter an exponent: ";
	cin>>x;
	double y=2., a;
	for (z=0;z<=x;z++){
		a = y / 2;
		y = a;
	}
	cout.precision(20);
	cout<<a;
	return 0;
}

