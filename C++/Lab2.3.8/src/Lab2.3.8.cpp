//============================================================================
// Name        : 8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	unsigned long long x, y=1, a, b, c;
	cout<<"Enter a number: ";
	cin>>a;
	c = a;
	for (b=1;b<a;b++){
		x = c * y;
		y++;
		c = x;
	}
	cout<<x;

	return 0;
}
