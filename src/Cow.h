/*
 * Cow.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef COW_H_
#define COW_H_

#include "Animals.h"

class Cow : public Animals
{
public:
	void getName();
	void accept(TrickVisitor *t);
};

#endif /* COW_H_ */
