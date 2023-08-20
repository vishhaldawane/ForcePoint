//============================================================================
// Name        : DefaultValues.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int addition(int a=0, int b=0, int c=0, int d=0) {
	return a+b+c+d;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int sum1 = addition(10,20,30,40);
	cout<<"\nsum1 : "<<sum1;

	int sum2 = addition(10,20,30);
	cout<<"\nsum2 : "<<sum2;

	int sum3 = addition(10,20);
	cout<<"\nsum3 : "<<sum3;

	int sum4 = addition(10);
	cout<<"\nsum4 : "<<sum4;

	int sum5 = addition();
	cout<<"\nsum5 : "<<sum5;


	return 0;
}
