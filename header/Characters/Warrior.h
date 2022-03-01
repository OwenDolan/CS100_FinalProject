#ifndef __WARRIOR_H__
#define __WARRIOR_H__
#include "Character.h"

using namespace std;

class Warrior : public Character {
private:
	bool bloodLustActive = false;
	bool fatigue = false;

public:
	void setWarriorAttack(int value);
	void resonantSmash();
	void shieldBash();
};

#endif
