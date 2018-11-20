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
	double pi4 = 0.;
	long n;
	cout << "Number of iterations? ";
	cin >> n;
	float x=1., y=1.;
	int i=0;
	for(i=0;i<n;i++){
		double z = (1./x) * y;
		pi4 = pi4 + z;
		x = x + 2;
		y = y * -1;
	}
	cout.precision(20);
	cout<< "Pi = " << (pi4 * 4.) << endl;
	return 0;
}
