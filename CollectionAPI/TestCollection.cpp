/*
 * TestCollection.cpp
 *
 *  Created on: 09-Mar-2023
 *      Author: apple
 */

#include <iostream>
#include "ArrayList.h"
#include "myutil.h"


using namespace std;

using namespace myutil;

int main() {


	cout<<"\n Testing colleciton API";

	Collection *playList = new ArrayList;

	playList->add(100);
	playList->add(200);
	playList->add(300);
	playList->add(400);

	cout<<"\n---------";

	Iterator *iterator = playList->iterator();
	while(iterator->hasNext()) {
		int num =iterator->next();
		cout<<"\nValue : "<<num;
	}

/*
	cout<<"\nValue:"<<playList->get(0);
	cout<<"\nValue:"<<playList->get(1);
	cout<<"\nValue:"<<playList->get(2);
	cout<<"\nValue:"<<playList->get(3);

*/

	return 0;
}

