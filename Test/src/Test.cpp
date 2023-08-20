//============================================================================
// Name        : Test.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Batsman {
	//private: //default
		int rank;
		char name[20];
		int score;
		float strikeRate;
	public:
		Batsman(int rank=0, char *name="\0", int score=0, float strikeRate=0) {
			cout<<"\n4-ARG EXPLICIT CTOR : Batsman(int,char*,int,float) ctor is setting the batsman..."<<endl;
			this->rank = rank;
			strcpy(this->name,name);
			//this->name=name;
			this->score = score;
			this->strikeRate = strikeRate;
		}
		Batsman(int rank, char *name, int score) {
			cout<<"\n3-ARG EXPLICIT CTOR : Batsman(int,char*,int) ctor is setting the batsman..."<<endl;
			this->rank = rank;
			strcpy(this->name,name);
			//this->name=name;
			this->score = score;
			this->strikeRate = 0;
		}
		Batsman(int rank, char *name) {
			cout<<"\n2-ARG EXPLICIT CTOR : Batsman(int,char*) ctor is setting the batsman..."<<endl;
			this->rank = rank;
			strcpy(this->name,name);
			//this->name=name;
			this->score = 0;
			this->strikeRate = 0;
		}
		Batsman(int rank) {
			cout<<"\n1-ARG EXPLICIT CTOR :  Batsman(int,char*) ctor is setting the batsman..."<<endl;
			this->rank = rank;
			strcpy(this->name,"\0");
			//this->name=name;
			this->score = 0;
			this->strikeRate = 0;
		}
		/*Batsman() {
			cout<<"\nNO-ARG EXPLICIT CTOR : Batsman() ctor is setting the batsman..."<<endl;
			this->rank = 0;
			strcpy(this->name,"\0");
			//this->name=name;
			this->score = 0;
			this->strikeRate = 0;
		}*/

		void print_batsman() {
			cout<<"Rank :"<<rank<<endl;cout<<"Name :"<<name<<endl;
			cout<<"Score:"<<score<<endl;cout<<"SR   :"<<strikeRate<<endl;
		}
		void hit_sixer() {
			cout<<"\nhitting sixer...."<<endl;
			score+=6;
		}
};



int main() {
	cout << "Begin" << endl; // prints Good API Design
	Batsman batsman1(10);
	//batsman1.rank=-10;
	batsman1.print_batsman();
	batsman1.hit_sixer();
	batsman1.print_batsman();

	return 0;
}