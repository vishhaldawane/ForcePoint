/*
 * KiteExceptions.cpp
 *
 *  Created on: 24-Nov-2021
 *      Author: apple
 */
#include <iostream>
using namespace std;


class KiteDownException  { // Exception class must be a part of a header library
	char *msg;
public:

	KiteDownException(char *msg) {
		this->msg = new char [ strlen (msg) ];
		strcpy(this->msg,msg);
	}
	char* getMessage() {
		return msg;
	}
};

class Kite
{
		int  kiteNumber;
		char kiteColor[20];
		char kiteOwner[20];
		int  kiteLength;
		bool flying;

		static int kiteCount; // created only once per class, and not per object

	public:

		static void printKiteCount() { //this can refer to any static member without any object reference
			cout<<"\nTotal kites : "<<kiteCount;
		}


		Kite(int kiteNumber=0, char kiteColor[]="\0", char kiteOwner[]="\0", int kiteLength=0)
		{
			  cout<<"\nKite(int,char[],char[],int) constructor....";
			  this->kiteNumber=kiteNumber;
			  strcpy(this->kiteColor,kiteColor);
			  strcpy(this->kiteOwner,kiteOwner);
			  this->kiteLength=kiteLength;
			  this->flying=true;
			  ++kiteCount; // if each kite is instantiated, increase this variable
		}

		bool isFlying() {
			return flying;
		}

		virtual ~Kite() {
			cout<<"\n~Kite() destructor...DELETING ";
					}
		void setKite(int kiteNumber, char kiteColor[], char kiteOwner[], int kiteLength)
		{
			  cout<<"\nsetKite(int,char[],char[],int) method/function....";
			  this->kiteNumber=kiteNumber;
			  strcpy(this->kiteColor,kiteColor);
			  strcpy(this->kiteOwner,kiteOwner);
			  this->kiteLength=kiteLength;

		}
		void printKite() {
			cout<<"\nKite Number : "<<kiteNumber<<"\t stored at  "<<&kiteNumber;
			cout<<"\nKite Color  : "<<kiteColor <<"\t stored at  "<<&kiteColor;;
			cout<<"\nKite Owner  : "<<kiteOwner <<"\t stored at  "<<&kiteOwner;;
			cout<<"\nKite Length : "<<kiteLength<<"\t stored at  "<<&kiteLength;;


			cout<<"\n---------------------";
		}
		void kiteFight(Kite &theKiteRef); //declared here

};

class A
{
	void f();
	void u();
	void n();
};

void A::f() {
	//a code of 100 lines | but somewhere we can write a new defn
}
void A::u() {

}
void A::n() {

}

//define here out of the class body - wonderful, possible in C++, not in java


void Kite::kiteFight(Kite &theKiteRef) {
	cout<<"\nKite fight started...";
	//high wind
	if(kiteLength == 300) {
		KiteDownException kde("Kite is down due to high wind flow...");
		flying=false;
		--kiteCount;
		throw kde;
	}
	//low wind
	if(theKiteRef.kiteLength == 200) {
			theKiteRef.flying=false;
			--kiteCount;
			KiteDownException kde("Kite is down due to low wind flow...");
			throw kde;
	}
	//sharp thread of kite1 and kite2

	if(kiteLength >=100 && theKiteRef.kiteLength==100) {
		theKiteRef.flying=false;
		flying=false;
		--kiteCount;
		--kiteCount;
		KiteDownException kde("Kite is down due to sharp threads...of both he kites...");
		throw kde;

	}

	//lesser sharp thread of kite2
}


//scope resolution operator
int Kite::kiteCount=0; // a separate declaration is required outside of the class too

int main()
{
	cout<<"\nBefore the birth of any kite what is the count???";
	//cout<<"\nKite Count is : "<<Kite::kiteCount;

	Kite::printKiteCount();

	Kite theKite1(101,"Red","Bismar",100);
	theKite1.printKite();

	Kite theKite2(102,"Blue","Vishhal",100);
	theKite2.printKite();

	//cout<<"\nKite Count is : "<<Kite::kiteCount;
	Kite::printKiteCount();
	//Kite::kiteCount=1000;
	//cout<<"\nKite Count is : "<<Kite::kiteCount;


	cout<<"\nis kite1 flying : "<<theKite1.isFlying();
	cout<<"\nis kite2 flying : "<<theKite2.isFlying();

	try
	{
		theKite1.kiteFight(theKite2); //theKite1 is the invoker
	}
	catch(KiteDownException &kde) {
		cout<<"\nProblem : "<<kde.getMessage();
	}
	cout<<"\nis kite1 flying : "<<theKite1.isFlying();
	cout<<"\nis kite2 flying : "<<theKite2.isFlying();

	Kite::printKiteCount();

	return 0;
}



