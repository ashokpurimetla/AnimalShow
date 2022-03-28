/*
 * Cow.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#include "Cow.h"

void Cow::getName()
{
	cout << "Cat entered" << endl;
}

void Cow::accept(TrickVisitor *t)
{
	t->visitCowTricks(this);
}



