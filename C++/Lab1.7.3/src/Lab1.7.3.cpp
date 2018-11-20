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
	int a,b,c,d;
	cout<<"Enter 1 of 4 values (Between 1 and 255): ";
	cin>>a;
	cout<<"Enter 2 of 4 values (Between 1 and 255): ";
	cin>>b;
	cout<<"Enter 3 of 4 values (Between 1 and 255): ";
	cin>>c;
	cout<<"Enter 4 of 4 values (Between 1 and 255): ";
	cin>>d;
	if ((a<256 and a>0) and (b<256 and b>0) and (c<256 and c>0) and (d<256 and d>0)){;
	cout <<a<<"."<<b<<"."<<c<<"."<<d;
	}
	else cout << "Invalid";

	return 0;
}
