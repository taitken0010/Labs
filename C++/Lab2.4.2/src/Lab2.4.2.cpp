//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
int main(void) {
unsigned short int val;
bool ispal = true;
int mask1 = 1, mask2 = 1;
cout << "value = ";
cin >> val;
mask2 = mask2 << 15;

for(int i = 0; i < 8; i++){
	if ((((val & mask1) == 0) && ((val & mask2) != 0)) ||
			(((val & mask1) != 0) && ((val & mask2) == 0))){

		ispal = false;
	}
	else {
		mask1 = mask1 << 1;
		mask2 = mask2 >> 1;
	}
}

if(ispal)
	cout << val << " is a bitwise palindrome" << endl;
else
	cout << val << " is not a bitwise palindrome" << endl;
return 0;
}
