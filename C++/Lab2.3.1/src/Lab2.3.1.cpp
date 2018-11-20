//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int c0, a;
	cout<<"Enter a natural number: ";
	cin>>c0;
	a=0;
	while(c0!=1){
		a++;
		if(c0 % 2 == 0){
			c0 = c0 / 2;
			cout<<c0<<endl;
		}
		else {
			c0 = 3  * c0 + 1;
			cout<<c0<<endl;
		}
	}
	cout<<"Steps = "<<a;

	return 0;
}
