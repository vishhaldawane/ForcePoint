/*
 * StructureTest.cpp
 *
 *  Created on: 18-Aug-2023
 *      Author: apple
 */
#include <iostream>
using namespace std;

typedef struct Batsman
{
  int rank;
  char name[20];
  int score;
  float strikeRate;

  void printBatsman() {
	  cout<<"Rank :"<<rank;
	  cout<<"Name :"<<name;
	  cout<<"Score:"<<score;
	  cout<<"SR   :"<<strikeRate;
  }
}Batsman;


int main() {

	Batsman batsman1={10,"Sachin",10000,89.45};
	batsman1.printBatsman();
	return 0;
}
