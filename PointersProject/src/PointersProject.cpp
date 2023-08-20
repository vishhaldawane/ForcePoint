//============================================================================
// Name        : PointersProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*

	Value of any variable is accessed
	via two ways

	1. via its name <-- given by us
	2. via its address <-- given by the machine

	int num=179;

	variable type    -> int
	variable name	 -> num
	variable value	 -> 179
	variable address -> 32860

	179 has a bit pattern [ bit representation ]

	1 	 0  1   1   0  0    1 	1
	128  64	32  16	8  4	2  	1

	128	 +  32 + 16       + 2 +  1 = 179

int
	<------------- 4 bytes ---------------->
	<----------------num------------------->
	0000 0000 0000 0000 0000 0000 1011 0011
	<---1---> <---2---> <---3---> <---4--->
	32768	  32769     32770     32771


char
	<------------- 1 byte ---------------->
	<----------------gender------------------>
								  0000 0000
	                              <---1--->
								  12768

	i want someone to hold this 12768
	and scan 8 bits to read a character


float = 24 digits for decimal + 8 bits for fractional
   <------------- 4 bytes ---------------->
	<----------------rate----------------->
	0000 0000 0000 0000 0000 0000 1011 0011
	<---1---> <---2---> <---3---> <---4--->
	42768	  42769     42770     42771


	i want someone to hold this 42768
	and scan 32 bits [ 24+8] to read a float




double = 54 digits for decimal + 10 bits for fractional
   <------------- 8 bytes ---------------->
	<----------------rate----------------->
	0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000
	<---1---> <---2---> <---3---> <---4---> <---5---> <---6---> <---7---> <---8--->
	52768	  52769     52770     52771		..	..	.	......


	i want someone to hold this 52768
	and scan 64 bits [ 54+10] to read a double



	32768 <-- memory address		int    *ptr1;
	12768 <-- memory address		char   *ptr2;
	42768 <-- memory address		float  *ptr3;
	52768 <-- memory address		double *ptr4;



	i want anyone of this memory address to be stored


	int    *ptr; [ special variable to hold ONLY THE MEMORY ADDRESS ]
	|		 |
	|		 its data type is already declared as "unsigned int"
    |
    it is not the data type of the pointer
    rather it is the type of that variable whose data would
    be scanned by the pointer







	1 bit		0 / 1
	2 bits		00
				01
				10
				11

	3 bits		000
				001
				010
				..
				8 combinations

	4 bits		16
	5 bits		32
	6 bits		64
	7 bits		128
	8 bits		256







	Pointers
	--------
	it is a special variable
	that holds the memory address
	of another variable



*/
#include <iostream>
using namespace std;

class Flight { };
class CommercialFlight : public  Flight { };

void fun() {
	cout<<"\nthis is  fun function";
}

float average(int i, int j, int k) {
	cout<<"\nthis is average function";
	return (i+j+k) /3.0;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	char gender='T';
	int num=179;
	float rate=4.8;
	double distance=98383.8;

	float (*ptr7) (int,int,int);
	fun();

	ptr7 = &average;

	float ans = ptr7(4,6,7);
	cout<<"\nAVerage : "<<ans;

	//pointer declaration cum initialization
	char   *ptr1 = &gender;
	int    *ptr2 = &num;
	float  *ptr3 = &rate;
	double *ptr4 = &distance;

	void	(*ptr5) ();

	ptr5 = &fun;

	ptr5(); // are we invoking a function?? YES

//	Flight *ptr;

	// ptr = new Flight();
	// ptr->fly();

	// ptr = new CommercialFlight();

	// ptr->fly();


	//if your create a pointer
	//then u must take care of its initialization


	char name[80]="Bismar Alejandro Alvarado Garcia";

	printf("\n[%c]",name[3]);
	printf("\nfull   [%s]",name);
	printf("\nsecond [%c]",name[7]);
	printf("\nsecond [%s]",&name[7]);

	printf("\nsecond [%c]",name[0]);
	printf("\nsecond [%c]",name[7]);
	printf("\nsecond [%c]",name[17]);
	printf("\nsecond [%s]",&name[26]);


	printf("\n[%u]",&name);

	printf("\n[%u]",&gender);
	printf("\n[%u]",&num);
	printf("\n[%u]",&rate);
	printf("\n[%u]",&distance);

	cout<<"\ngender        : "<<gender;
	cout<<"\ngender        : "<<*&gender;
	cout<<"\ngender        : "<<*ptr1;
	cout<<"\nsizeof gender : "<<sizeof(gender);
	cout<<"\nsizeof ptr1   : "<<sizeof(ptr1);
	cout<<"\nstored at     : "<<(void*)&gender<<endl;


	cout<<"\nnum        : "<<num;
	cout<<"\nnum        : "<<*&num; //* - valueAt     & - memory address of num
	cout<<"\nnum        : "<<*ptr2;
	cout<<"\nsizeof num : "<<sizeof(num);
	cout<<"\nsizeof ptr2: "<<sizeof(ptr2);
	cout<<"\nstored at  : "<<&num<<endl;

	cout<<"\nrate        : "<<rate;
	cout<<"\nrate        : "<<*&rate;
	cout<<"\nrate        : "<<*ptr3;
	cout<<"\nsizeof rate : "<<sizeof(rate);
	cout<<"\nsizeof ptr3 : "<<sizeof(ptr3);
	cout<<"\nstored at   : "<<&rate<<endl;


	cout<<"\ndistance        : "<<distance;
	cout<<"\ndistance        : "<<*&distance;
	cout<<"\ndistance        : "<<*ptr4;
	cout<<"\nsizeof distance : "<<sizeof(distance);
	cout<<"\nsizeof ptr4     : "<<sizeof(ptr4);
	cout<<"\nstored at       : "<<&distance<<endl;

	return 0;
} // 1000 gb Hard disk  3000 square feet house

