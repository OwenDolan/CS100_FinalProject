#ifndef __MAGE_H__
#define __MAGE_H__
#include "Character.h"

using namespace std;

class Mage : public Character {
private:
	string mageSpecialName;

	
public:

	Mage(int h, int s, int d, int a);
	int basicAtk();
	int specialSkill();
	string getSkillName();

};
#endif
