/*
 * Iterable.cpp
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#include "Iterator.cpp"

class Iterable {
	public:
		virtual Iterator* iterator()=0;
		virtual ~Iterable();
};



