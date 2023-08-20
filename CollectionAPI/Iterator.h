/*
 * Iterator.h
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

namespace myutil {

class Iterator {
public:
	Iterator();
	virtual ~Iterator();
	Iterator(const Iterator &other);
	Iterator& operator=(const Iterator &other);
	virtual bool hasNext()=0;
	virtual int next()=0;
};

} /* namespace util */

#endif /* ITERATOR_H_ */
