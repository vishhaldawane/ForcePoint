/*
 * Collection.cpp
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#include "Iterable.cpp"

class Collection : public Iterable {
	public:
		virtual ~Collection();
		virtual void add(void *item)=0;
		virtual void clear()=0;
		virtual bool isEmpty()=0;
		virtual int size()=0;
};


