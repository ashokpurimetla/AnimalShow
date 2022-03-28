//============================================================================
// Name        : AnimalShow.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Animals.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

int main()
{
	Animals *a = new Dog;
	Animals *a1 = new Cat;
	Animals *a2 = new Cow;

	TrickVisitor *tJump = new JumpingTrick;
	TrickVisitor *tRun = new RunningTrick;
	TrickVisitor *tEat = new FastEattingTrick;

	a->getName();
	a->accept(tJump);
	a->accept(tRun);
	a->accept(tEat);
	cout << "===============" << endl;

	a1->getName();
	a1->accept(tJump);
	a1->accept(tRun);
	a1->accept(tEat);
	cout << "===============" << endl;

	a2->getName();
	a2->accept(tJump);
	a2->accept(tRun);
	a2->accept(tEat);
	cout << "===============" << endl;

	return 0;
}
