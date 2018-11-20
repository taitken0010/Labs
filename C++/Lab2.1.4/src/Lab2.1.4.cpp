//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int yr, mo, day;
	cout<<"Enter year # (Only 20th and 21st century): ";
	cin>>yr;
	cout<<"Enter # of month (between 1-12): ";
	cin>>mo;
	cout<<"Enter day # (between 1-31): ";
	cin>>day;
	mo = mo - 2;
	if (mo<=0){
		mo = mo + 12;
		yr = yr - 1;
	}
	mo = (mo * 83)/32;
	mo = mo + day;
	mo = mo + yr;
	mo = (yr/4) + mo;
	mo = mo - (yr/100);
	mo = (yr/400) + mo;
	mo = mo % 7;
	if (mo==0){
		cout<<"Sunday";
	}
	if (mo==1){
		cout<<"Monday";
	}
	if (mo==2){
		cout<<"Tuesday";
	}
	if (mo==3){
		cout<<"Wednesday";
	}
	if (mo==4){
		cout<<"Thursday";
	}
	if (mo==5){
		cout<<"Friday";
	}
	if (mo==6){
		cout<<"Saturday";
	}
	if (mo==7){
		cout<<"Sunday";
	}
	return 0;
}
