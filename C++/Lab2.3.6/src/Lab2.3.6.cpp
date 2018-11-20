//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;//height
	cout<< "Height of Triangles: ";
	cin>>n;
	int s=n-1;
	int t=1;
//	if(n<10)
	{
		//top rows
		for(int p=0;p<3;p++){
			for(int i=0;i<s;i++)cout<<" ";
			cout<<"*";
			for(int i=0;i<s;i++)cout<<" ";
			cout<<" ";
		}
		cout<<endl;


		//interior rows
		for(int h=n-1;h>1;h--)
		{
			s--;

			for(int p=0;p<3;p++){
				for(int i=0;i<s;i++)cout<<" ";
				cout<<"*";
				for(int i=0;i<t;i++)cout<<" ";
				cout<<"*";
				for(int i=0;i<s;i++)cout<<" ";
				cout<<" ";
			}
			cout<<endl;

			t+=2;
		}

		//bottom rows
		for(int p=0;p<3;p++){
			for(int i=0;i<2*n-1;i++)cout<<"*";
			cout<<" ";
		}
		cout<<endl;
	}

	//else
	{
		//cout<<"Number too big";
	}
	return 0;
}
