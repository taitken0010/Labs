//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int sys;
	float m, ft, in;
	cout<<"Press 0 for Metric or Press 1 for Imperial: ";
	cin>>sys;
	if (sys==0){
		cout<<"Enter distance in meters: ";
		cin>>m;
		ft = m * 3.28084;
		in = (ft - (int)ft)*12;
		ft = (int)ft;
		cout << ft <<"'  "<< in << "''";
	}
	else{
		cout<<"Enter distance in feet: ";
		cin>>ft;
		cout<<"Enter distance in inches: ";
		cin>>in;
		m = (ft + in/12)/3.28084;
		cout << m << "m";

	}
	return 0;
}
