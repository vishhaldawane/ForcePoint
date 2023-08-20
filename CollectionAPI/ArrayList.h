/*
 * ArrayList.h
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

#include "List.h"

namespace myutil {

class ArrayList: public List {
	int index;
	int *array;
public:
	ArrayList();
	virtual ~ArrayList();
	ArrayList(const ArrayList &other);
	ArrayList& operator=(const ArrayList &other);

	virtual void add(int i);
	virtual Iterator* iterator();
	virtual int get(int index);

	class ArrayListIterator :  public Iterator
	  {
		ArrayList *a;
	  	public:

		ArrayListIterator(ArrayList *a) {
			this->a=a;
			this->a->index=-1;
		}


	  	bool hasNext() {
	  		if(this->a->index<10)
	  			return true;
	  		else
	  			return false;
	  	}

	  	int next() {
	  		this->a->index++;
	  		return this->a->array[this->a->index];
	  		//return this->a->get(this->a->index);

	  	}

	  };

};



} /* namespace util */

#endif /* ARRAYLIST_H_ */
