//============================================================================
// Name        : 1v2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	float d;
	do{
	cout << "0 - Exit"<<"\n";
	cout << "1 - Addition"<<"\n";
	cout << "2 - Subtraction"<<"\n";
	cout << "3 - Multiplication"<<"\n";
	cout << "4 - Division"<<"\n";
	cin >> c;
	switch(c){
	case 0 : break;
	case 1 : {
		cout << "Enter 1st number: "<<"\n";
		cin>>a;
		cout << "Enter 2nd number: "<<"\n";
		cin>>b;
		d = a + b;
		cout << d << endl;
		break;
	}
	case 2 : {
		cout << "Enter 1st numbers: "<<"\n";
		cin>>a;
		cout << "Enter 2nd number: "<<"\n";
		cin>>b;
		d = a - b;
		cout << d << endl;
		break;
	}
	case 3 : {
		cout << "Enter 1st numbers: "<<"\n";
		cin>>a;
		cout << "Enter 2nd number: "<<"\n";
		cin>>b;
		d = a * b;
		cout << d << endl;
		break;
	}
	case 4 : {
		cout << "Enter 1st number: "<<"\n";
		cin>>a;
		cout << "Enter 2nd number: "<<"\n";
		cin>>b;
		if(b==0)
			cout << "Invalid \n";
		else{
			d = a / b;
			cout << d << endl;
		}
		break;
	}
	default : cout << "Wrong \n";
	break;
	}
	}while(c!=0);
	return 0;
}
