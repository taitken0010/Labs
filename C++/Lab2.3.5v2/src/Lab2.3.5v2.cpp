//============================================================================
// Name        : 5v2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(void) {
	int x;
cout<<"Enter Value: ";
cin>>x;
if(x>10){
	cout<<"Sorry, the side size is too big";
}
cout << '+';
for(int i = 2; i < x; i++)
cout << '-';
cout << '+' << endl;
for(int i = 2; i < x; i++) {
cout << '|';
for(int j = 2; j < x; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 2; i < x; i++)
cout << '-';
cout << '+' << endl;
return 0;
}
