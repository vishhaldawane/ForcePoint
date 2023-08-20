//============================================================================
// Name        : TemplateProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*class MyIntegers // "Container" to hold  2 int values - GLASS
{
	int x; //declare 2 - Water
	int y;
public:
	MyIntegers(int x, int y) { //initialize 2 - FILL UP GLASS with Water
		this->x = x;
		this->y = y;
	}
	void printIntegers() { //print 2 - Iterator - to iterate two values -ACCESS THE CONTENT OF THE CONTAINER - access the WATER
		cout<<"\nx : "<<x;
		cout<<"\ny : "<<y;

	}
	void swap() { //swap 2	- Algorithm -a logic on 2 integers - stirring/mixing/lemon juice/ something u want to work with water...
		cout<<"\nSwapping integers...";
		int temp = x;
		x = y;
		y = temp;
	}
};
*/

/*
 *
 * 					Components Orthogonal Space
 *
 *							x -- data type - 1) SoftDrink
 * 							|				 2) Noodles
 * 							|				 3) fried rice
 * 					---------------------	 4) chicken chilly
 * 					|		|			|	 5) coconut water
 * 					y		i			z	 6) Pickles
 * 					|		|			|	 7) Covid Vaccine
 * 					|		|			|
 * 				container	iterator	algorithm
 * 				|			|			|
 * 		1)		Bottle		Straw		drink(); -> Water, ColdCoffee, Juice, softdrink
 * 		2)		Bowl		chopsticks	eat();
 * 		3)		Plate		Spoon		eat();
 * 		4)		Plate		Fork		eat();
 * 		5)      Coconut		Straw		drink();
 * 		6)      Plate		finger		lick();
 *
 * 		7)		WineGlass	mouth		sipIt()
 * 		8)		TinyBottle	syringe		inject()


 */

/*class MyCharacters
{
	char x; //declare 2
	char y;
public:
	MyCharacters(char x, char y) { //initialize 2
		this->x = x;
		this->y = y;
	}
	void printCharacters() {//print 2
		cout<<"\nx : "<<x;
		cout<<"\ny : "<<y;

	}
	void swap() { //swap 2
		cout<<"\nSwapping MyCharacters...";
		char temp = x;
		x = y;
		y = temp;
	}
};

class MyFloats
{
	float x; //declare 2
	float y;
public:
	MyFloats(float x, float y) { //initialize 2
		this->x = x;
		this->y = y;
	}
	void printFloats() {//print 2
		cout<<"\nx : "<<x;
		cout<<"\ny : "<<y;

	}
	void swap() { //swap 2
		cout<<"\nSwapping floats...";
		float temp = x;
		x = y;
		y = temp;
	}
};
*/

//GENERIC CONTAINER  - TO HOLD GENERIC VALUES - GENERIC ITERATOR - GENERIC ALGORITHM

template <typename T> class MyValues // "Container" to hold  2 int values - GLASS
{
	T x; //declare 2 - Water
	T y;
public:
	MyValues(T x, T y) { //initialize 2 - FILL UP GLASS with Water
		this->x = x;
		this->y = y;
	}
	void printValues() { //print 2 - Iterator - to iterate two values -ACCESS THE CONTENT OF THE CONTAINER - access the WATER
		cout<<"\nx : "<<x;
		cout<<"\ny : "<<y;

	}
	T getX() {
		return x;
	}
	T getY() {
		return y;
	}
	void setX(T t) {
		x = t;
	}
	void setY(T t) {
		y = t;
	}

	void swap() { //swap 2	- Algorithm -a logic on 2 integers - stirring/mixing/lemon juice/ something u want to work with water...
		cout<<"\nSwapping Values...";
		T temp = x;
		x = y;
		y = temp;
	}
};

class Song
{
	char *title;

public:
		Song(char *title) {
			this->title = new char [ strlen(title) ];
			strcpy(this->title,title);
		}
		operator char*() {
			return title;
		}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Song s1("Hi");
	Song s2("Bye");

	MyValues<Song> jukeBox(s1,s2);
	jukeBox.printValues();


	MyValues<int> mi(10,20);
	mi.printValues();
	mi.swap();
	mi.printValues();
	int x = mi.getX();
	cout<<"\nx " <<x;
	cout<<"\n--------------------";

	MyValues<float>  mf (10.5,55.9);
	mf.printValues();
	mf.swap();
	mf.printValues();

	cout<<"\n--------------------";

	MyValues<char>  mc ('M','F');
	mc.printValues();
	mc.swap();
	mc.printValues();

	return 0;
}
