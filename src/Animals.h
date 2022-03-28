/*
 * Animals.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

#include "TrickVisitor.h"

class Animals
{
public:
	virtual void getName()=0;
	virtual void accept(TrickVisitor *t)=0;
};

#endif /* ANIMALS_H_ */
