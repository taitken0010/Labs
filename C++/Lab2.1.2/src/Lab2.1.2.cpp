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
	float gross, tax, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> gross;
	cout<< "Enter a tax rate as percentage: ";
	cin>>tax;
	if (tax>0 and tax<100 and gross>0){
		tax = (1+(tax / 100));
		netprice = gross / tax;
		taxvalue = gross - netprice;
		cout << "Net price: " << netprice<<'\n';
		cout << "Tax value: " << taxvalue<<'\n';
	}
	else cout<<"Invalid";
}
