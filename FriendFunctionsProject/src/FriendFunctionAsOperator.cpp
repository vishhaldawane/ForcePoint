/*
 * FriendFunctionAsOperator.cpp
 *
 *  Created on: 22-Nov-2021
 *      Author: apple
 */

#include <iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int imag;
	public:
		Complex(int x=0, int y=0) {
			real = x;
			imag = y;
		}
		void printComplex() {
			cout<<"\nreal : "<<real;
			cout<<"\nimag : "<<imag;
		}

		//friend Complex operator +(Complex &ref1, Complex &ref2) ;

		// complex3 = complex1.opearator +(complex2)
		Complex operator+(Complex &ref) { //its a member funciton
			cout<<"\nclass specific operator +(Complex)...";
			return Complex(real + ref.real, imag + ref.imag );
		}
};

/*Complex operator +(Complex &ref1, Complex &ref2) {
		cout<<"\nglobal operator +(Complex,Complex)...";

		return Complex(ref1.real + ref2.real, ref1.imag + ref2.imag );
}*/

int main() {

	Complex complex1(10,4);
	complex1.printComplex();

	Complex complex2(20,5);
	complex2.printComplex();

	Complex complex3 = complex1 + complex2;
	complex3.printComplex();


}

