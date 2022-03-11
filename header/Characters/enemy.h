#ifndef __enemy_H__
#define __enemy_H__
#include "Character.h"


using namespace std;

class enemy: public Character {
private:
	string enemySpecialName;
public:
	enemy(int h, int s, int d, int a);
	int specialSkill();
	int basicAtk();
	string getSkillName();

};
#endif
