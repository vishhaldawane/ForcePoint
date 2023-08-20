/*
 * FriendClass.cpp
 *
 *  Created on: 22-Nov-2021
 *      Author: apple
 */

//============================================================================
// Name        : FriendFunctionsProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Magician;
class FlightTicket;
class FriendOfAll;

class BankAccount
{

	private:
		float bankBalance;

	public:
		BankAccount(float balance) {
			bankBalance = balance;
		}
		void printBankAccount() {
			cout<<"\nBank Account Balance  : "<<bankBalance;
		}
		friend class FriendOfAll;
};

class Magician
{

	private:
		char *magic;

	public:
		Magician(char *magic) {
			this->magic = magic;
		}
		void showTheMagic() {
			cout<<"\nThe Magic is : "<<magic;
		}
		friend class FriendOfAll;
};

class FlightTicket
{

	private:
		float flightTicketCost;

	public:
		FlightTicket(float cost) {
			flightTicketCost=cost;
		}
		void printFlightTicketCost() {
			cout<<"\nFlight Ticket Cost : "<<flightTicketCost;
		}
		friend class FriendOfAll;
};

class FriendOfAll // its a global friend function
{
	FlightTicket *flightTicket; //global declaration so that available to the entire class for fun foo far etc...
	Magician *magician;
	BankAccount *bankAccount;

	public:

	FriendOfAll(FlightTicket *ft, Magician *m, BankAccount *ba) {
		cout<<"\nIm constructor(), im important to hand over the object references..";
		flightTicket = ft;
		magician = m;
		bankAccount = ba;
	}
	void printAll() { //download
		cout<<"\nIm printAll(), im also the friend..";
		cout<<"\nFlight Ticket : "<<flightTicket->flightTicketCost;
		cout<<"\nMagic is      : "<<magician->magic;
		cout<<"\nBank Balance  : "<<bankAccount->bankBalance;
	}
	void foo() { //upload
		cout<<"\nIm foo(), im also the friend..";

	}
	void far() {
		cout<<"\nIm far(), im also the friend..";
	} //process and print
	void fun() {
		cout<<"\nIm fun(), im also the friend..";
	}//backup

};
/*
int main() {
	cout << "!!!Hello Friend Functions!!!" << endl; // prints !!!Hello World!!!

	Magician theMagician("Abracadabra");
	FlightTicket flightTicket(4500);
	BankAccount bankAccount(86000);

	FriendOfAll friendOfAll(&flightTicket,&theMagician, &bankAccount);
	friendOfAll.printAll();
	friendOfAll.far();
	friendOfAll.fun();
	friendOfAll.foo();
	return 0;
}*/

/*
 *
 *  the purpose is to collaborate the data of dissimilar objects
 *
 *
 *  	Magician				BankAccount		FlightTicket
 *  		|					|					|
 * friend gotIt(Magician *m,	|					|
 *  		BankAccount *ba,	|					|
 *  		FlihtTicket *ft) 	|					|
 *  		 					|					|
 *  					friend gotIt()		friend gotIt()
 *
 *   gotIt() {
 *
 *   }
 *
 *
 *
 *
 *
 *
 *
 *
 */



