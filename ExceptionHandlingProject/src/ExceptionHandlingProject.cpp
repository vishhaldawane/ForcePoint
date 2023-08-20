//============================================================================
// Name        : ExceptionHandlingProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Exception {
	string msg;
public:
	Exception(string msg) {	this->msg = msg;}
	virtual string getMessage() {		return msg;}
	virtual ~Exception() {}
};
class ArithmeticException : public Exception
{
public:
	ArithmeticException(string msg) : Exception(msg) {}
};

int divide(int x, int y) {
	cout<<"\nBegin divide()";
	if(y==0)
		throw ArithmeticException("Cannot divide by zero");
	int ans = x / y;
	return ans;
}

int moon() {
	cout << "Begin main\n" << endl; // prints !!!Hello World!!!
	int x=0; int y=0;
	do
	{
		try
		{
			cout<<"\nEnter value for num "; cin>>x;
			cout<<"\nEnter value for den "; cin>>y;

			int div = divide(x,y);
			cout<<"\ndivision is : "<<div;
		}
		catch(ArithmeticException &ae) {
			cout<<"\nException :  "<<ae.getMessage();
			//y=1;

		}
	}while(y==-1);

	/*
	int a=100;
	cout<<"\nEnter value for a : ";
	cin>>a;
	try {
		cout<<"\nInside the try";
		if(a < 0)
			throw a;

		if(a>=45 && a<=65)
			throw 'q';

		if(a>=100 && a<=150)
			throw 10.4;

		cout<<"\nEnd of the try..";
	}
	catch(int  x) {
		cout<<"\nCaught the exception1 "<<x;
	}
	catch(char y) {
		cout<<"\nCaught the exception2 "<<y;
	}
	catch(...) {
		cout<<"\nMaster ( catchall) handler ";
	}
*/

	cout<<"\nEnd of main\n";
	return 0;
}
/*
 * 		Exception = run time error
 *
 *
 * 		compile time error		runtime		linker error	fatal error   logical
 * 		|						|			|				|				|
 *		syntax				exception	missing library	 termination	developer
 *
 *
 *		traditional approach is using if and else condition
 *
 *		e.g
 *
 *		lesser clarity of the code's business logic
 *		increases the tediousness
 *
 *		fundtransfer(Savings source, Savings target, float amountToTransfer)
 *		{
 *			if(target.found()) { //if there are 20/25 "jungle of if else" conditions
 *				if(source.found()) {
 *					if(source.balance() > amountToTransfer)) {
 *						source.withdraw(amountToTransfer);
 *						target.deposit(amountToTransfer);
 *					}
 *					else {
 *						cout<<"\ninsufficient balance at source";
 *					}
 *				}
 *				else {
 *					cout<<"\nsource not found";
 *				}
 *			}
 *			else {
 *				cout<<"\nTarget not found";
 *			}
 *		}
 *
 *
 *		fundtransfer(Savings source, Savings target, float amountToTransfer)
 *		{
 *
 *		  try
 *		  { <--- in the try only the business logic
 *		  	target.find();
 *		  	source.find();
 *		  	source.balanceCheck(amountToTransfer);
 *		  	source.withdraw(amountToTransfer);
 *		  	target.deposit(amountToTransfer);
 *		  }
 *		  catch(if target not found then) { <-- error handler 1
 *		  	cout<<"\nTarget not found";
 *		  }
 *		  catch(if source not found then) { <-- error handler 2
 *		  	cout<<"\nsource not found";
 *		  }
 *		  catch(if source balance lower than amountToTransfer then) {
 *		  	cout<<"\ninsufficient balance at source";
 *		  }
 *
 *		}
 *
 *
 * 	using the throw keyword - one can throw the exceptions
 *
 *
 *
 *
 *
 */
