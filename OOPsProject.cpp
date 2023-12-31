//============================================================================
// Name        : OOPsProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
//Inheritance


/*Constructor :is a special code block
		it has the same name as of the enclosing class

		what is the job of the default constructor???
				it does NOTHING

		it is called automatically!!! when???
		when the instance of the class is created..

well what is the purpose this the ctor!!!!

		to initialize the state of the object


*/
// Point2D, x and y <-- BASE
// Point3D, will hold x, y, z <-- DERIVED - child
// ColouredPoint3D, will hold x,y,z, and color in "Red" etc <-- CHILD OF THE CHILD

/*
class Flight
{
	int flightNumber;
	char flightName[20];
	char source[20];
	char destination[20];
	int seats;

public:
	Flight(int flno, char )

};*/



//GENERALIZATION
class Person
{
	//there is a 1.default constructor | 2.implicit ctor
	// 3.implicit no arg ctor

	//how does  it look like...Person() { }

	private:
		char gender;    // 4 -- field / data member
		int  age;		// 4
		string name;  // 20  MyString name;

	public:
		/*Person() {
			cout<<"\nPerson()....";
			age=0;
			name[0]='\0';
			gender='\a';
		}*/

					// <--- local variables ---->
		Person(char gender=' ', int age=0, string name="") {
				cout<<"\nPerson(char,int,char[])....";
				this->age=age;
				//strcpy(this->name,name);
				this->name=name;
				this->gender=gender;
		}

		/*Person(char gender) {
				cout<<"\nPerson(char)....";
				this->age=0;
				this->gender=gender;
				strcpy(this->name,"\0");

		}

		Person(char gender, int age) {
				cout<<"\nPerson(char,int)....";
				this->age=age;
				this->gender=gender;
				strcpy(this->name,"\0");

		}*/


		void printPerson() {
			cout<<"\ngender : "<<gender;
			cout<<"\nAge    : "<<age;
			cout<<"\nName   : "<<name;
			cout<<"\n----------";
		}

	void setAge(int age) {
		this->age = age;
	}

	void setGender(char gender) {
		this->gender = gender;
	}

	void setName(string name) {
		this->name= name;
	}
};
/*
 * 		|		|
 * 		|		|
 * 		---------
 * 8	|		|
 * 7	|		|
 * 6	|		|
 * 5  ->|       |
 *      ---------
 * 4 	|		|
 * 3 	|		|
 * 2 	|		| char name[20];
 * 1 	|	M	| char gender 1 -> 4
 *   	+-------+ int  age;
 *
 *   	LIFO
 *   	last in first out
 *
 *
 */


//SPECIALIZATION of the Person
class Student : public Person
{
private:// 3 fields are inherited(28) from the base
	int rollNumber;		//4
	float totalMarks;	//4
	char grade;			//4 (1)

public:
	//constructor for 'Student' must explicitly
	//initialize the base class 'Person' which
	//does not have a default constructor

	Student(char gender, int age, string name, int rollNumber,float totalMarks, char grade) : Person(gender,age,name) {//internally invoking base class ctor
		cout<<"\n\tStudent()";
		this->rollNumber=rollNumber;
		this->totalMarks=totalMarks;
		this->grade=grade;
	}

	/*Student(char gender,  int rollNumber) : Person(gender) {//internally invoking base class ctor
			cout<<"\n\tStudent()";
			this->rollNumber=rollNumber;
			this->totalMarks=0;
			this->grade='\a';
	}*/
	void printStudent() {
		Person::printPerson(); //invoke super class method/ base class method/function
		cout<<"\nRoll   : "<<rollNumber;
		cout<<"\nTotal  : "<<totalMarks;
		cout<<"\nGrade  : "<<grade;
		cout<<"\n====================";
	}
};

//Employee to be created as a child of Student
//with empno, company, salary

class MyString // good news is that we have the String class in STL
{
	private:
		char *array;
		int len;

	public:
		MyString(char name[]) {
			len = strlen(name);
			array = new char[ len ]; // Dynamic Memory Allocation
			strcpy(array,name);
		}
		char* getString() {
			return array;
		}
		int length() {
			return len;
		}
		//u can calculate subString(3); 3rd  till end - char* subString(int start)
		//u can calculate subString(3,6); till 6th position - char* subString(int start, int end)
		//convert the array into uppercase - char* toUpper() { }
		//convert the array into lowercase - char* toLower() { }

};
/*
 *
 * non-linear inheritance in C++

   	   	   Point2D
   	   	   	  |x,y
   	   	   	  +------------------
   	   	  	  |			 		|
   	   	  	  |					|
   	   	   Point3D		Color	|
  	  	  	  |z		|col|	|
  	  	  	  |			|   |	|
  	  	  	  -----------   |	|
  	  	  	  	  |			|	|
  	  	  	 Point3DColor 	Point2DColor

  	  	  	 Animal
  	  	  	 |[breathing()]
  	  	  -----------------------
  	  	  |		  |[giveBirth()]|
  	 [fly]Bird	Mammal		   Fish [ layEggs() ]
  	  	  |	 |  |  | | 	     	| |
  	  Sparrow|  |  | | 	        | Sword
  	  	  	 |  |  | |          |
  	  	  	 +---+ | +----------+
  	  	  	   |   |     |
  	  	  	   Bat Human Whale


  	  	  	   Animal
  	  	  	   |
  	  	  	---------
  	  	  	|		|
  	  	  Bird	Mammal
  	  	    |		|
  	  	    +-------+
  	  	    	|
  	  	     FLyingMammal


  	  	     Animal  - dreaded diamond in C++
  	  	      /\
  	  	 Bird/  \Mammal
  	  	     \  /
  	  	      \/
  	  	      Bat


  	  	   BankAccount
  	  	   |
  	  --------------
  	  |				|
  	Savings			Current
  		|			|
  		+-----------+
  			  |
  		SavingsCurrent



  			Engine
  			| initialize() { }
  			|
  	    ------------------
  	    |				|
  	PetrolEngine	CNGEngine
  		|			|
  		-------------
  			 |
  		HybridEngine






  	  	  	 Bat? ->flying mammal
  	  	  	 Whale? -> swimming mammal









 */
int main() {
	/*MyString str("Bismar");
	cout<<"\nstr : "<<str.getString();
	cout<<"\nstr : "<<str.length();
*/

	cout << "\n\n!!!OOPS CONCEPTS!!!" << endl; // prints !!!Hello World!!!

	Person p1('F');
	Person p2('M',27,"Bismar");
	Person p3('F',33);

	cout<<"\nsize of p1 : "<<sizeof(p1);


	p1.printPerson();
	p2.printPerson();
	p3.printPerson();

	p1.setAge(22);
	p1.setName("Julia");
	p1.printPerson();


	//Student s1('M',455);
	Student s2('F',23,"Jane",355,98.0,'B');
	Student s3('M',21,"Jill",155,97.0,'C');

	//cout<<"\nsize of s1 : "<<sizeof(s1);

	//s1.printStudent();
	s2.printStudent();
	s3.printStudent();



	return 0;
}
