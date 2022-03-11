#ifndef __ARCHER_H__
#define __ARCHER_H__
#include "Character.h"

using namespace std;

class Archer : public Character {

private: 
	string archerSpecialName;

public:
	Archer(int h, int s, int d, int a);
	int specialSkill();
        string getSkillName();
	int basicAtk();
};

#endif

