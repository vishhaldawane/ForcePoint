/*
 * List.cpp
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#include "Collection.cpp"

class ListIterator;

class List : public Collection
{
	public:
		virtual ListIterator* listIterator()=0;
		virtual void* get()=0;
};

