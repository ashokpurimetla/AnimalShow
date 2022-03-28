/*
 * Dog.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */
#include "Dog.h"

void Dog::getName()
{
	cout << "Dog entered" << endl;
}

void Dog::accept(TrickVisitor *t)
{
	t->visitDogTricks(this);
}
