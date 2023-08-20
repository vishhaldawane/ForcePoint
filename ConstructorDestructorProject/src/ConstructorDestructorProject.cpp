//============================================================================
// Name        : ConstructorDestructorProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class BankAccount
{
private:
		int accountNumber;			//  4
		char accountHolder[20];		// 20
		double accountBalance;		//  8

public:
		BankAccount() {
			cout<<"\nBankAccount()...initialize something.....";
			// array =  new char[50];
				//if files/nw/threads are open
			accountNumber=0;
			accountBalance=0;
			strcpy(accountHolder,"");
		}

		virtual ~BankAccount() {
			cout<<"\n~BankAccount()...to clean-up something.....";
				//close the files/nw/threads here
			// delete array;
		}

};

/*int main() {
	cout << "begin main " << endl; // prints !!!Hello World!!!

	//BankAccount ba = new BankAccount(); //java way or c# way

	BankAccount baObj;

	BankAccount *ptr; // its not an object
		// it a pointer to the object

	cout<<"\nSize of baObj : "<<sizeof(baObj);
	cout<<"\nSize of *ptr  : "<<sizeof(*ptr);
	cout<<"\nSize of ptr   : "<<sizeof(ptr);


	ptr = new BankAccount; //dynamic allocation of the object
		//if delete is not called, memory leak

	delete ptr; // we tend to forget this line

	cout << "\nend main " << endl; // prints !!!Hello World!!!

	return 0;
}*/


// 1       2        3
//fun()-> foo()-->far()
//  6      5        4


class Doctor
{ //vtable - Doctor::diagnose()
	public:

	Doctor() {
		cout<<"\nDoctor()....";
	}
	virtual ~Doctor() {
		cout<<"\n~Doctor()....";
	}

	virtual void diagnose() {
		cout<<"\nDoctor diagnosing...with lab reports";
	}

	virtual void prescribe() {
		cout<<"\nPrescribing medicine...";
	}
};
class Surgeon : public Doctor
{
	//vtable - Surgeon::diagnose()
	public:

	Surgeon() {
		cout<<"\n\tSurgeon()....";
	}

	virtual ~Surgeon() {
			cout<<"\n\t~Surgeon()....";
	}
	void diagnose() {
		cout<<"\nSurgeon is diagosing..with CTScan";
	}

	virtual void doSurgery() { // this is not the inherited method, rather it is an exclusive method
		cout<<"\nDoing the Surgery....";
	}
};

class NeuroSurgeon : public Surgeon
{
//vtable: NeuroSurgeon::diagnose
public:

	NeuroSurgeon() {
			cout<<"\n\t\tNeuroSurgeon()....";
	}

	~NeuroSurgeon() {
			cout<<"\n\t\t~NeuroSurgeon()....";
	}
	void diagnose() {
		cout<<"\nNeuroSurgeon diagnosing with the MRI scan...";
	}
	void doSurgery() {
		cout<<"\nNeuro Surgeon is doing surgery...";
	}
	void doBrainSurgery() {
		cout<<"\nNeuro Surgeon doing the brain surgery....";
	}
};


/*int main() {

	cout<<"\nBegin\n";

	Doctor d;
	cout<<"\n-----------";

	Surgeon s;
	cout<<"\n-----------";

	NeuroSurgeon ns;
	cout<<"\n-----------";

	cout<<"\nEnd\n";

	return 0;
}*/

/*int main() {

	cout<<"\nBegin\n";

	Doctor *ptr;

	ptr = new Doctor();
	ptr->diagnose();
	delete ptr; //are we invoking the destructor of the Doctor?

	cout<<"\n-----------";

	Surgeon *sptr;
	sptr = new Surgeon();
	sptr->diagnose();
	sptr->doSurgery();


	delete sptr;
	cout<<"\n-----------";


	NeuroSurgeon *nsptr;
	nsptr = new NeuroSurgeon();
	nsptr->diagnose();
	nsptr->doSurgery();
	nsptr->doBrainSurgery();
	delete nsptr;
	cout<<"\n-----------";



	cout<<"\nEnd\n";

	return 0;
}*/

int main() {

	cout<<"\nBegin\n";

	Doctor *ptr;

	ptr = new Doctor();
	ptr->diagnose();
	delete ptr; //are we invoking the destructor of the Doctor?

	cout<<"\n-----------";


	ptr = new Surgeon();
	ptr->diagnose();
	//ptr->doSurgery();


	delete ptr;
	cout<<"\n-----------";



	ptr = new NeuroSurgeon();
	ptr->diagnose();
	//ptr->doSurgery();
	//ptr->doBrainSurgery();
	delete ptr;
	cout<<"\n-----------";



	cout<<"\nEnd\n";

	return 0;
}

