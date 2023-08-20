/*
 * Iterable.h
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#include "Iterator.h"

#ifndef ITERABLE_H_
#define ITERABLE_H_

namespace myutil {

class Iterable {
public:
	Iterable();
	virtual ~Iterable();
	Iterable(const Iterable &other);
	Iterable& operator=(const Iterable &other);
	virtual Iterator* iterator()=0;
};

} /* namespace util */

#endif /* ITERABLE_H_ */
