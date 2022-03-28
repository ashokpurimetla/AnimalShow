/*
 * Dog.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef DOG_H_
#define DOG_H_

#include "Animals.h"

class Dog : public Animals
{
public:
	void getName();
	void accept(TrickVisitor *t);
};

#endif /* DOG_H_ */
