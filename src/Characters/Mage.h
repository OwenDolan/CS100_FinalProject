#ifndef __MAGE_H__
#define __MAGE_H__
#include "Character.h"

using namespace std;

class Mage : public Character {
private:
	int mageAttackModifier = 0.5;// mage normal attacks should do less
	
public:
	void setMageMP(int value);
	void fireBlast();
	void icyWind();
	void lightningRose();


};
#endif
