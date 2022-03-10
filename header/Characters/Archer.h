#ifndef __ARCHER_H__
#define __ARCHER_H__
#include "Character.h"

using namespace std;

class Archer : public Character {

private: 
	string element;
	string arr[5] = { "fire","water","ice","lightning","wind" };
	string archerSpecialName;

public:
	Archer(int h, int s, int d, int a)
		:base(h, s, d, a)
	{}
	void setElement(string newElement);
	int archerSpecial1();
	int archerSpecial2();
	void elementalArrow();
        string getSkillName();
};

#endif

