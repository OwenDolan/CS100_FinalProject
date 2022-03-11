#ifndef __enemy_H__
#define __enemy_H__
#include "Character.h"
#include <string>

using namespace std;

class enemy: public Character {
private:
	string enemySpecialName;
	
public:
	string enemyName;
	enemy(int h, int s, int d, int a, string n);
	int specialSkill();
	int basicAtk();
	string getSkillName();
	int specialSkill1();
	int specialSkill2();
};
#endif
