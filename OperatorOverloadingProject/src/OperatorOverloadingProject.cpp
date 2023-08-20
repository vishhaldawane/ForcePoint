//============================================================================
// Name        : OperatorOverloadingProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int bismar=765;
	int *bis = &bismar;
	int alvarado = bismar;


	cout<<"\nvalue  of bismar : "<<bismar;  // 765
	cout<<"\nstored at        : "<<&bismar; // 1234
	cout<<"\n----------------";

	cout<<"\nvalue  of bis    : "<<bis; //this is address of bismar  1234
	cout<<"\nstored at        : "<<&bis; //address of bis [ not of bismar ] 7897
	cout<<"\nvalue by bis     : "<<*bis; // value of bismar, ie 765
	cout<<"\n----------------";

	cout<<"\nvalue  of alvarado : "<<alvarado;  // 765
	cout<<"\nstored at alvarado : "<<&alvarado; // 8966

	cout<<"\n----------------";



	return 0;
}
/*
 *
 * Employee e1(101,"Jack",5000);
 * Employee e2(102,"Jane",7000);
 *
 * Employee e3;
 * e3.setSalary(e1.getSalary() + g2.getSalary() );
 *
 * 			OR
 *

  Employee e3;
  e3 = e1 + e2; //here we have to define the operator function +()
  						to fetch the salary of e1 and e2
  internally the above math expression would be

  e3 = e1.operator +(e2);


  	  	  copy constructor - to clone the object


  	  Employee e1(101,...............); //empno,ename,sal,hra,da,ta,pf .. 30 fields
  	  	  	  	 <--- are we invoking a constructor?---> YES

  	  Employee e2 = e1; //we want to bypass the constructor's heavy job of
  	  	  	  102  	  	  	  	  30 fields validation,checking,parsing etc..
  	  	  	  	  	  	  	  	  	and then assigning...

  	  	  	  	  we want bit to bit direct assignment


  	  	  	  	  a copy constructor takes object reference as an argument


  	  lets put some value addition in pointers again



  1	  	int bismar = 965;

  2	  	int *bis = &bismar;
  	  	    |      |
  	   a pointer   addressOf

  3	    int alvarado = bismar;

  4		bismar=900;

  5		*bis=800;

  6		alvarado=555;

  	  							bismar							alvarado
  	  							+-------+						+-------+
  	  							| [800]	|<--value of bismar		| 555	|
  	  							+-------+						+-------+
  	  			+--------------> 32860 <-- address of bismar	87440
  	  		bis	|
			+---|-----+
 	 	 	| [32860] |<-- "value of bis", but address of bismar
			+---------+
			12345 <-- &bis

	--------------------------------------------------

						dad
						|
		jacky--> [human body] <--jack is same
						|
						darling


	jacky is also known as jack


  1	  	int bismar = 965;

  2	  	int *bis = &bismar;							int ary[3]={10,20,30};
  	  	    |      |
  	   a pointer   addressOf

  3	    int &alvarado = bismar; //nickname/another name to an existing variable
  	  	  	  	  	  	  	  	  [its powerful than pointers ]

  4		bismar=900;

  5		*bis=800;

  6		alvarado=555;

  	  							bismar/alvarado
  	  							+-------+
  	  							| [555]	|<--value of bismar
  	  							+-------+
  	  			+--------------> 32860 <-- address of bismar
  	  		bis	|
			+---|-----+
 	 	 	| [32860] |<-- "value of bis", but address of bismar
			+---------+
			12345

 */





