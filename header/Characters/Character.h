#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <iostream>
#include <string>
#include "../Items/item.h"// include whatever this is
#include <vector>

using namespace std;

class Character {
private:
	int health = 100;
	int MP;
	int speed;
	int attackDMG;
	int defense;
	int atk = 10;// new

	vector<Item*> inventory;


public:
	int getHealth();
	void basicAtk();
	void setSpeed(int newSpeed);
	void setHealth(int newHealth);
	void setAtk(int newAtk);
    int getAtk() { return atk; }
//	void setCurrency(int newCurrency);
	void setDefense(int newDefense);
	void setMP(int newMP);
//	maybe setName?
	vector<Item*>& returnInventory();
	void addToInventory(Item* i);


	


};

#endif
