/*
 * TrickVisitor.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef TRICKVISITOR_H_
#define TRICKVISITOR_H_

#include <iostream>
using namespace std;

class Dog;
class Cat;
class Cow;

class TrickVisitor
{
public:
	virtual void visitDogTricks(Dog *dog)=0;
	virtual void visitCatTricks(Cat *cat)=0;
	virtual void visitCowTricks(Cow *cow)=0;
};

class JumpingTrick : public TrickVisitor
{
public:
	void visitDogTricks(Dog *dog);
	void visitCatTricks(Cat *cat);
	void visitCowTricks(Cow *cow);
};

class RunningTrick : public TrickVisitor
{
public:
	void visitDogTricks(Dog *dog);
	void visitCatTricks(Cat *cat);
	void visitCowTricks(Cow *cow);
};

class FastEattingTrick : public TrickVisitor
{
public:
	void visitDogTricks(Dog *dog);
	void visitCatTricks(Cat *cat);
	void visitCowTricks(Cow *cow);
};


#endif /* TRICKVISITOR_H_ */
