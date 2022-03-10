#ifndef __FARMER_H__
#define __FARMER_H__
#include "Character.h"

using namespace std;


class Farmer: public Character{
private:
	string farmerSpecialName;

public:
	Farmer(int h, int s, int d, int a);
	void infiniteAttack();
	void infiniteHealth();
	void infiniteDefense();
	void infiniteMP();
	int specialSkill();
	int basicAtk();
	string getSkillName();
};

#endif
