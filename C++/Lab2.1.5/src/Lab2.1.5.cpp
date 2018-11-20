//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f, g, yr;
	cout << "Enter Year: ";
	cin >> yr;
	a = yr % 19;
	b = yr % 4;
	c = yr % 7;
	d = (a * 19 + 24) % 30;
	e = (2*b + 4*c + 6*d + 5) % 7;
	if ( d + e < 10){
	f = d + e + 22;
	cout << "March "<<f;
	}
	else{
	g = d + e - 9;
	cout << "April "<<g;
	}
	return 0;
}
