#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <iostream>
#include <string>
#include "item.h"// include whatever this is

using namespace std;

class Character {
private:
	int health;
	int MP;
	int speed;
	int attackDMG;
	int defense;
	int atk;// new

	item* [] inventory;


public:
	int getHealth();
	void basicAtk();
	void setSpeed(int newSpeed);
	void setHealth(int newHealth);
	void setAtk(int newAtk);
//	void setCurrency(int newCurrency);
	void setDefense(int newDefense);
	void setMP(int newMP);
//	maybe setName?


	


};

#endif
