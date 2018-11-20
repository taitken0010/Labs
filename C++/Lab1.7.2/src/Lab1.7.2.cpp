//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int x,y;
	float a,b;
	cout<<"Enter A (whole number): ";
	cin>>x;
	cout<<"Enter B (whole number again) ";
	cin>>y;
	a = 1.0/x;
	b = 1.0/y;
	if(fabs(a-b)<0.000001){
		cout<<"Results are equal(by 0.000001)";
	}
	else cout<<"Results are not equal(by 0.000001)";
	return 0;
}
