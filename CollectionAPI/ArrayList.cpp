/*
 * ArrayList.cpp
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#include <iostream>

#include "ArrayList.h"
using namespace std;

namespace myutil {

ArrayList::ArrayList() {
	// TODO Auto-generated constructor stub
	array = new int[10];
	index=-1;
}

ArrayList::~ArrayList() {
	// TODO Auto-generated destructor stub
}

ArrayList::ArrayList(const ArrayList &other) {
	// TODO Auto-generated constructor stub

}



ArrayList& ArrayList::operator=(const ArrayList &other) {
	// TODO Auto-generated method stub

}





 void ArrayList::add(int item) {
	 cout<<"\nAdding an item to the array list....";
	 array[++index]=item;
}




 Iterator* ArrayList::iterator() {
	 cout<<"\nAdding an item to the array list....";
	 Iterator *ptr= new ArrayListIterator(this);
	 return ptr;
}

 int ArrayList::get(int index) {
 	 cout<<"\ngetting an item from the array list....";

 	 return array[index];

 }



} /* namespace util */
