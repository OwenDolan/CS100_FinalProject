#ifndef __PALADIN_H__
#define __PALADIN_H__
#include "Character.h"

using namespace std;

class Paladin: public Character {
private:
	string paladinSpecialName;

public:
	Paladin(int h, int s, int d, int a);
	int specialSkill();
	int basicAtk();
	string getSkillName();
};

#endif
