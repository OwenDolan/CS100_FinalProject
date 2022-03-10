#ifndef __WARRIOR_H__
#define __WARRIOR_H__
#include "Character.h"

using namespace std;

class Warrior : public Character {
private:

	string warriorSpecialName;

public:
	Warrior(int h, int s, int d, int a);
	int specialSkill();
	int basicAtk();
	string getSkillName();
};

#endif
