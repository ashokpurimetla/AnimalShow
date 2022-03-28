/*
 * Cat.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef CAT_H_
#define CAT_H_

#include "Animals.h"

class Cat : public Animals
{
public:
	void getName();
	void accept(TrickVisitor *t);
};


#endif /* CAT_H_ */
