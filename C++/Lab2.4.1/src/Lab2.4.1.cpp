//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
int main (){
	int count=0;
	unsigned long n;
	cout<<"Enter a number: ";
	cin>>n;
	for (int x=0 ; x<32 ; x++){
			if((n&1)!=0){
				count++;
			}
			n = n >> 1;

		}
		cout<<count;
	return 0;
}
