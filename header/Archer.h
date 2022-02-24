#ifndef __ARCHER_H__
#define __ARCHER_H__
#include "Character.h"

using namespace std;

class Archer : public Character {

private: 
	string element;
	string arr[5] = {"fire","water","ice","lightning","wind"}

public:
	void setArcherAttack(int value);
	void setElement(string newElement);
	void setArcherSpeed(int value);
	void rainOfArrows();
	void elementalArrow();

};

#endif

