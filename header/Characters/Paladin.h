#ifndef __PALADIN_H__
#define __PALADIN_H__
#include "Character.h"

using namespace std;

class Paladin:public Character {
private:
	string paladinSpecialName;

public:
	Paladin(int h, int s, int d, int a)
		:base(h, s, d, a)
	{}
	int paladinSpecial1(); //counterAttack
	int paladinSpecial2();
	string getSkillName();
};

#endif
