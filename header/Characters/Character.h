#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <iostream>
#include <string>
#include <vector>

#include "../Items/Item.h"
#include "../Menu/Menu.hpp" 

using namespace std;

class Character {
private:
	int health;
	int speed;
	int defense;
	int atk; 
	int currency = 0;
	vector<Item*> inventory;


public:
	Character(int h, int s, int d, int a);
	int getHealth();
	int getSpeed();
	int getDefense();
	int getAtk();
	int getCurrency();
	vector<Item*> getInventory();
	void addInventory(Item *i);
	void setCurrency(int newCurrency);
	void setSpeed(int newSpeed);
	void setHealth(int newHealth);
	void setAtk(int newAtk);
	void setDefense(int newDefense);
	virtual int basicAtk() = 0;
	virtual int farmerSpecial1() = 0;
	virtual int farmerSpecial2() = 0;
	virtual int archerSpecial1() = 0;
	virtual int archerSpecial2() = 0;
	virtual int warriorSpecial1() = 0;
	virtual int warriorSpecial2() = 0;
	virtual int paladinSpecial1() = 0;
	virtual void paladinSpecial() = 0;
	virtual int mageSpecial1() = 0;
	virtual int mageSpecial2() = 0;
	virtual int mageSpecial3() = 0;
	virtual int enemySpecial1() = 0;
	virtual string getSkillName() = 0;



};

#endif
