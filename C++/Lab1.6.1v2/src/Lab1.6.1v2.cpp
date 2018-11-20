//============================================================================
// Name        : 1v2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {
bool answer=false;
int value;
cout << "Enter a value: ";
cin >> value;
if((value >= 0 and value < 10) or (value * 2 < 20 and value - 2 > - 2) or (value - 1 > 1 and value / 2 < 10) or (value == 111))answer=true;
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
return 0;
}
