#ifndef __WARRIOR_H__
#define __WARRIOR_H__
#include "Character.h"

using namespace std;

class Warrior : public Character {
private:
	bool bloodLustActive = false;
	bool fatigue = false;
	string warriorSpecialName;

public:
	Warrior(int h, int s, int d, int a)
		:base(h, s, d, a)
	{}
	int warriorSpecial1();
	int warriorSpecial2();
};

#endif
