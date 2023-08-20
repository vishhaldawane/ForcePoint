/*
 * List.h
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#ifndef LIST_H_
#define LIST_H_

#include "Collection.h"

namespace myutil {

class List: public Collection {
public:
	List();
	virtual ~List();
	List(const List &other);
	List& operator=(const List &other);

	virtual void add(int i)=0;
	virtual Iterator* iterator()=0;
	virtual int get(int index)=0;
};

} /* namespace util */

#endif /* LIST_H_ */
