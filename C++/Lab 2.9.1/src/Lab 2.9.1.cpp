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
	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
	int vector2[7];
	int b=1;
	for (int a = 0; a < 6; a++){
		vector2[0] = vector1[6];
		vector2[b] = vector1[a];
		b++;
	}
	for(int i = 0; i < 7; i++)
		cout << vector2[i] << ' ';
	cout << endl;
	return 0;
}
