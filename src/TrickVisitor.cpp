/*
 * TrickVisitor.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */
#include "TrickVisitor.h"

void JumpingTrick::visitDogTricks(Dog *dog)
{
	cout << "Dog is Jumping" << endl;
}
void JumpingTrick::visitCatTricks(Cat *cat)
{
	cout << "Cat is Jumping" << endl;
}
void JumpingTrick::visitCowTricks(Cow *cow)
{
	cout << "Cow is Jumping" << endl;
}

void RunningTrick::visitDogTricks(Dog *dog)
{
	cout << "Dog is running" << endl;
}
void RunningTrick::visitCatTricks(Cat *cat)
{
	cout << "Cat is running" << endl;
}
void RunningTrick::visitCowTricks(Cow *cow)
{
	cout << "Cow is running" << endl;
}

void FastEattingTrick::visitDogTricks(Dog *dog)
{
	cout << "Dog is fast eatting" << endl;
}
void FastEattingTrick::visitCatTricks(Cat *cat)
{
	cout << "Cat is fast eatting" << endl;
}
void FastEattingTrick::visitCowTricks(Cow *cow)
{
	cout << "Cow is fast eatting" << endl;
}

