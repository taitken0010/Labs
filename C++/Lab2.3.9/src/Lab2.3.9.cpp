//============================================================================
// Name        : 9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n, a=4, x=1, i;
	long m;
	cout<< "Enter starting number (Odd): ";
	cin>>n;
	if(n>1){
		for(i = 2 ; i<n ; i+=2)
		{
			m = x + a;
			x = m;
			a = a + 8;
			cout << m << endl;
		}
	}
	else if (n==1)
	{
		cout << "1";
	}
	else cout << "Invalid Input";
	return 0;
}
