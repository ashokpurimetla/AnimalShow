/*
 * Cat.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#include "Cat.h"

void Cat::getName()
{
	cout << "Cat entered" << endl;
}

void Cat::accept(TrickVisitor *t)
{
	t->visitCatTricks(this);
}



