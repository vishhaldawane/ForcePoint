/*
 * Iterator.cpp
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

class Iterator {
	public:
		virtual bool hasNext()=0;
		virtual void* next()=0;
		virtual ~Iterator();
};


