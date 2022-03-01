#ifndef __PALADIN_H__
#define __PALADIN_H__
#include "Character.h"

using namespace std;

class Paladin:public Character {
public:
	void setPaladinAttack(int value);
	void setPaladinDefense(int value);
	void tideCaller();// counterAttack
	void partyProtect();// if time permits
	void heal();
};

#endif
