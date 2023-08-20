/*
 * Collection.h
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#ifndef COLLECTION_H_
#define COLLECTION_H_

#include "Iterable.h"

namespace myutil {

class Collection: public Iterable {
public:
	Collection();
	virtual ~Collection();
	Collection(const Collection &other);
	Collection& operator=(const Collection &other);

	virtual void add(int i)=0;
	virtual Iterator* iterator()=0;

};

} /* namespace util */

#endif /* COLLECTION_H_ */
