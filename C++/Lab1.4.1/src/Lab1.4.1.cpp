//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x,y,a,b,c,d,z;

	cout << "Enter value for x: ";
	cin >> x;

	a=(pi*pi)*((x*x)+0.5);
	b=(x*x)/a;
	z=(pi*pi);
	c=z*(((x*x)-0.5)*((x*x)-0.5));
	d=((x*x)/c)+1;
	y=b*d;

	cout << "y =" << y;
	return 0;

}
