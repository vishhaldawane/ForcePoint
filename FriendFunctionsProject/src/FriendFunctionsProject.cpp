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

class FriendB;
class FriendC;

class FriendA
{

	private:
		char *secretOfFriendA;

	public:
		FriendA(char *secret) {
			secretOfFriendA = new char [ strlen(secret)+1 ];
			strcpy(secretOfFriendA,secret);
		}
		void printTheSecretOfFriendA() {
			cout<<"\nSecret of Friend A : "<<secretOfFriendA;
		}
		friend void setNewSecret(FriendA *a,FriendB *b, FriendC *c, char *newSecret);
};

class FriendB
{

	private:
		char *secretOfFriendB;

	public:
		FriendB(char *secret) {
			secretOfFriendB = new char [ strlen(secret)+1 ];
			strcpy(secretOfFriendB,secret);
		}
		void printTheSecretOfFriendB() {
			cout<<"\nSecret of Friend B : "<<secretOfFriendB;
		}
		friend void setNewSecret(FriendA *a,FriendB *b, FriendC *c, char *newSecret);
};

class FriendC
{

	private:
		char *secretOfFriendC;

	public:
		FriendC(char *secret) {
			secretOfFriendC = new char [ strlen(secret)+1 ];
			strcpy(secretOfFriendC,secret);
		}
		void printTheSecretOfFriendC() {
			cout<<"\nSecret of Friend C : "<<secretOfFriendC;
		}
		friend void setNewSecret(FriendA *a,FriendB *b, FriendC *c, char *newSecret);
};


//fuction defined outside - but declared as friend
void setNewSecret(FriendA *a,FriendB *b, FriendC *c, char *newSecret)
{
	cout<<"\nsetter method can change the secret at any time....";
	int newlen = strlen(a->secretOfFriendA) + strlen(b->secretOfFriendB)+1;

	c->secretOfFriendC = new char [ newlen  ];
	strcpy(c->secretOfFriendC, a->secretOfFriendA);
	strcat(c->secretOfFriendC, b->secretOfFriendB);

}
/*
int main() {
	cout << "!!!Hello Friend Functions!!!" << endl; // prints !!!Hello World!!!

	FriendA theFriendA("The Law Of Attraction");
	FriendB theFriendB("The Law Of Resonance");

	FriendC theFriendC("WhatIsTheSecretOfAandB");

	theFriendA.printTheSecretOfFriendA();

	theFriendB.printTheSecretOfFriendB();

	theFriendC.printTheSecretOfFriendC();

	//strcpy(theFriend.secretOfFriendA."New secret");
	//theFriend.secretOfFriendA("Secret is changed");

	setNewSecret(&theFriendA,&theFriendB, &theFriendC,"Lets Find Out");

	theFriendC.printTheSecretOfFriendC();

	return 0;
}
*/


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
