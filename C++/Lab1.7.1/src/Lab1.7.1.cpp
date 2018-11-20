//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float a=2.3,b=2.3,c=1.123456,d=2.123456,e=2.123456;
	cout<<"Inputed Variables: "<<'\n'
			<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e<<'\n'<<'\n';
	cout<<"Outputed Variables: "<<'\n'<<fixed<<setprecision(1)<<a<<'\n';
	cout<<setprecision(2)<<b<<'\n';
	cout<<setprecision(6)<<c<<'\n';
	cout<<setprecision(2)<<d<<'\n';
	cout<<setprecision(0)<<e;
	return 0;
}
