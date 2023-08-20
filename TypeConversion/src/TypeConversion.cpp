//============================================================================
// Name        : TypeConversion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Tiger
{
	public:
	Tiger() {
		cout<<"\nTiger";
	}
	void roar() {
		cout<<"Tiger is roaring..."<<endl;
	}
};
class Wolf
{
	Tiger tigRef;

	public:
	Wolf(Tiger t) {
		cout<<"\nWolf()"<<endl;
		tigRef = t;
	}

	void howling(Tiger ref) {
			//cout<<"Wolf..";
		ref.roar();
		tigRef.roar();
	}
	void howling() {
				cout<<"Wolf..is howling";
				tigRef.roar();
	}
};

/*
 *
 *
 * 	class WashingMachine
 * 	{
 * 			Laundry wash(WashingPowder wp, Cloth c, Electricity e, Water w)
 * 			{
 *
 * 			}
 * 	}
 *
 */
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Tiger t;
	t.roar();

	cout<<"\n------------------";

	Wolf f=t; //Wolf f(t)  are we passing Tiger object here? Yes
	f.howling();



	float avg = (float) (11 + 12 + 14) / 3;
	cout<<"\navg : "<<avg;

	char letter = 65; //implicit cast
	cout<<"\nletter : "<<letter;

	int number = 'A'; //implicit
	cout<<"\nnumber : "<<number;

	return 0;
}
