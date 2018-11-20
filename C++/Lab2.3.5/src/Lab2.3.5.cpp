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
	int x, y;
	cout<<"Enter a value: ";
	cin>>x;
	if (1>x){
		cout<<"Illegal Number";
	}
	cout<<"+";
	for(y=2;y<x;y++){
		cout<<"-";
	}
	cout<<"+"<<endl;
	for(y=2;y<x;y++){
		cout<<"|";
	}
	for(y=0;y<x;y++){
		cout<<" ";
	}
	for(y=2;y<x;y++){
		cout<<"|"<<endl;
	}
	cout<<"+";
	for (y=2;y<x;y++){
		cout<<"-";
	}
	cout<<"+"<<endl;
	return 0;
}
