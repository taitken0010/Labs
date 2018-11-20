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
	int yr;
	cout<<"Enter a year: ";
	cin>>yr;
	if (yr>=1582){
		if (yr % 4 !=0){
			cout << "Common Year!";
		}
		else {
			if (yr % 100 !=0){
				cout << "Leap Year!";
			}
			else {
				if (yr % 400 !=0){
					cout << "Common Year!";
				}
				else {
					cout << " Leap Year !";
				}
			}
		}
	}
	else cout << "Invalid";
}
