//============================================================================
// Name        : CopyConstructorProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class KiteBetting
{

	int lowScore;
	int midScore;
	int highScore;
	float bettingCost;
	char *level;

public:
	KiteBetting() {
		cout<<"\nKiteBetting() no-arg constructor....";
		lowScore=0;
		midScore=0;
		highScore=0;
		bettingCost=0;
		level=NULL;
	}


	virtual ~KiteBetting() {
		cout<<"\n~KiteBetting() destructor...";
		delete level;
	}
	void setKiteBetting(int l, int m, int h, float bc, char *lvl) {
		lowScore=l;
		midScore=m;
		highScore=h;
		bettingCost=bc;
		level= new char[strlen(lvl)];
		strcpy(level,lvl);
	}
	void printBettingCost() {
		cout<<"\nLow Score   : "<<lowScore   <<"\t stored at : "<<&lowScore;
		cout<<"\nMid Score   : "<<midScore   <<"\t stored at : "<<&midScore;
		cout<<"\nHigh Score  : "<<highScore  <<"\t stored at : "<<&highScore;
		cout<<"\nBettng Cost : "<<bettingCost<<"\t stored at : "<<&bettingCost;
		cout<<"\nBetting lvl : "<<level <<"\Stored at : "<<&level;
		cout<<"\n----------------";
	}

	float getBettingCost() const {
		return bettingCost;
	}

	int getHighScore() const {
		return highScore;
	}

	char* getLevel() const {
		return level;
	}

	void setLevel(char *lvl) {
		level = lvl;
	}

	int getLowScore() const {
		return lowScore;
	}

	int getMidScore() const {
		return midScore;
	}
};
// A C++ DEVELOPER HAS TO FOCUS ON 1.SYSTEM LEVEL ACTIVITIES + 2. DOMAIN LEVEL ACTIVITIES
class Kite
{
		int  kiteNumber;
		char kiteColor[20];
		char kiteOwner[20];
		int  kiteLength;

		KiteBetting *kiteBetting; //hasA - now its not an object, rather its a pointer to point to a memory location

	public:
		Kite(int kiteNumber=0, char kiteColor[]="\0", char kiteOwner[]="\0", int kiteLength=0)
		{
			  cout<<"\nKite(int,char[],char[],int) constructor....";
			  this->kiteNumber=kiteNumber;
			  strcpy(this->kiteColor,kiteColor);
			  strcpy(this->kiteOwner,kiteOwner);
			  this->kiteLength=kiteLength;
			  kiteBetting=new KiteBetting; //allocation of new KiteBetting
			  kiteBetting->setKiteBetting(100, 150, 300, 30,"Beginner");
		}

		//the default copy constructor was doing bit masking...

		//but below constructor is doing custom allocation

		Kite(Kite &ref) //  Kite kite4(kite1);
		{
			  cout<<"\nKite(Kite&) copy constructor....";
			  this->kiteNumber=ref.kiteNumber;
			  strcpy(this->kiteColor,ref.kiteColor);
			  strcpy(this->kiteOwner,ref.kiteOwner);
			  this->kiteLength=ref.kiteLength;
			  kiteBetting=new KiteBetting; //this is deep cloning, allocation of a new KiteBetting and NOT BITMASKING by the default copy constructor
			  kiteBetting->setKiteBetting(100, 150, 300, 30,"Beginner");
		}

		Kite&  operator =(Kite &ref) // Kite kite4;  kite4=kite1;
		{
			Kite temp;
			  cout<<"\n=(Kite&) copy assignment operator....";
			  temp.kiteNumber=ref.kiteNumber;
			  strcpy(temp.kiteColor,ref.kiteColor);
			  strcpy(temp.kiteOwner,ref.kiteOwner);
			  temp.kiteLength=ref.kiteLength;
			  temp.kiteBetting=new KiteBetting; //this is deep cloning, allocation of a new KiteBetting and NOT BITMASKING by the default copy constructor
			  temp.kiteBetting->setKiteBetting(100, 150, 300, 30,"Beginner");
			  return temp;
		}

		virtual ~Kite() {
			cout<<"\n~Kite() destructor...DELETING "<<kiteBetting;
			delete kiteBetting; //deallocate hasA object - deep deallocation addressed here, AUTOMATIC GARBAGE COLLECTION , SO THAT THE DEVELOPER CAN FOCUS ON THE DOMAIN LOGIC
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
			cout<<"\nkiteBetting : "<<kiteBetting;
			kiteBetting->printBettingCost();
			cout<<"\n---------------------";
		}

		Kite& add (Kite kiteRef) { // kite3 = kite1 + kite2, -, --, ++, *  /
			Kite temp;
			temp.kiteNumber = kiteNumber + kiteRef.kiteNumber;


			/*strcat(temp.kiteOwner,kiteOwner);
			strcat(temp.kiteOwner,kiteRef.kiteOwner);

			strcat(temp.kiteColor,kiteColor);
			strcat(temp.kiteColor,kiteRef.kiteColor);
			strcat(temp.kiteColor,"its Green");  */  //RedBlue its Green

			temp.kiteLength = kiteLength + kiteRef.kiteLength;
			temp.kiteNumber = kiteNumber + kiteRef.kiteNumber;
			temp.kiteNumber = kiteNumber + kiteRef.kiteNumber;

			temp.kiteBetting=new KiteBetting; //this is deep cloning, allocation of a new KiteBetting and NOT BITMASKING by the default copy constructor

			int lowScore=kiteBetting->getLowScore() + kiteRef.kiteBetting->getLowScore();
			int midScore=kiteBetting->getMidScore() + kiteRef.kiteBetting->getMidScore();
			int highScore=kiteBetting->getHighScore()+ kiteRef.kiteBetting->getHighScore();
			int bettingCost=kiteBetting->getBettingCost() + kiteRef.kiteBetting->getBettingCost();

			/*int len = strlen(kiteBetting->getLevel()) + strlen(kiteRef.kiteBetting->getLevel());


			temp.kiteBetting->setLevel(new char[ len ] );

			int len1 = strlen(temp.kiteBetting->getLevel());
			char *tempChar = new char [ len1 ];


			strcat(tempChar,kiteBetting->getLevel());
			strcat(tempChar,kiteRef.kiteBetting->getLevel());
			temp.kiteBetting->setLevel(tempChar);

			temp.kiteBetting->setKiteBetting(lowScore, midScore, highScore, bettingCost, tempChar );
*/

			return temp;
		}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Kite theKite1(101,"Red","Bismar",170);
	theKite1.printKite();

	Kite theKite2(102,"Blue","Vishhal",230);
	theKite2.printKite();

	Kite theKite3 = theKite1.add(theKite2);
	theKite3.printKite();

	//theKite1.setKite(102, "Blue", "Alvarado",60);
	//theKite1.printKite();

	//Kite theKite2(102,"Blue","Vishhal",270); //number has a frequency, u know everything is number in the universe, hertz
	//	theKite2.printKite();


//	Kite theKite3 = theKite1; //default "copy assignment" = operator, will it create extra data members for theKite2? YES
//	theKite3.printKite();


//	Kite theKite4; //(theKite1); //so first create the object

	//and then assign the object
//	theKite4 = theKite1; //default copy constructor Kite(Kite&) that takes object itself as an argument
//	theKite4.printKite();



	return 0;
}
/*
 *		shallow cloning			vs		deep cloning
 *		|								|
 *		done by default				a developer has to override
 *		= and default copy			the = and copy constructor
 *		constructor
 *
 * 					kiteNumber	kiteColor	kiteOwner	kiteLength	*kiteBetting
 * 	theKite1		101			Red			Bismar		170				560
 * 																		|
 * 																		+----->500 lowScore	midScore	highScore	bettingCost
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 | 100		150			300			30
 *																				 |
 *					kiteNumber	kiteColor	kiteOwner	kiteLength	*kiteBetting-+
 *  theKite3		101			Red			Bismar		170				560
 *
 *
 *		in C language
 *
	 *		int *ptr;
	 *
	 *		ptr = (int*) malloc( sizeof(int)*6 ); // 24 bytes are 	chopped as 6 ints
	 *		...
	 *		..
	 *		free(ptr); // this will deallocate
	 *
 *
 *		in C++
 *
	 *		int *ptr;
	 *
	 *		ptr = new int [ 6 ]; //no typecast and no counting of 24
	 *
	 *		delete ptr;
	 *
	 *		new and delete are keywords, built in keywords
	 *
	 *		but malloc() and free() are functions
 *
 *
 */
