//============================================================================
// Name        : ContainmentProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * 				Association of Objects [ theme of OOPS ]
 *
 * 		Fuel		Vehicle			Smoke		Engine
 * 		|isA		|isA			|isA		|isA
 * 		Petrol		Car				CarSmoke	PetrolEngine
 * 					|hasA
 * 					+--PetrolEngine [ vital part of the Car ]
 * 					|
 * 					+--CarSmoke accelerate(Fuel)
 *
 */


//Petrol will have Piston as a vital part

class Engine { };
class PetrolEngine : public Engine //isA
{
public:
	void ignite() {
		cout<<"\nigniting the petrol engine..";
	}
};

//extend DieselEngine as child of Engine

/*------------------------*/
class Fuel
{

};
class Petrol : public Fuel //isA
{
public:
	void petrolCost() {
		cout<<"\nPetrol is costlier than diesel...";
	}
};
//make a Diesel as a Fuel
/*------------------------*/

class Smoke {

};
class CarSmoke : public Smoke { //isA
public:
	void smokeType() {
		cout<<"\nCarSmoke is releasing carbon monoxide";
	}
};

//  PetrolCarSmoke as child of CarSmoke
//  DieselCarSmoke as child of CarSmoke

/*------------------------*/
class Vehicle
{
public:
	void transport() {
		cout<<"\nVehicle is used to transport..";
	}
};

//a week 20 hours

//1(4) 2(4) 3(4) 4(4) 5(4)    14th hour

//5 days programs - C++   8 hours per day


//Car is the "whole" entity
class Car : public Vehicle //isA
{

	//PetrolEngine is the vital "part" of the "whole" entity
	PetrolEngine petrolEngine; //hasA

public:
//producesA
	CarSmoke accelerate(Petrol p) { //usesA Fuel
		cout<<"\nAccelerating the car...";
		p.petrolCost();
		petrolEngine.ignite();
		CarSmoke sm;
		return sm; //return here - mandatory
	}
};

//make a PetrolCar child of Car
//make a DieselCar child of Car

/*------------------------*/

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Car theCar;
	theCar.transport(); // from Vehicle

	Petrol thePetrol;

	CarSmoke carSmoke = theCar.accelerate(thePetrol) ; // from Car
	carSmoke.smokeType();
	return 0;
}
