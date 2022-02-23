#ifndef __enemy_H__
#define __enemy_H__
#include "Character.h"
#include "fight.h" //have to include fight.h or whatever its called

using namespace std;

class enemy: public Character {
private:
	int enemyAtk;
public:
	void setEnemyAttack(int value);
	void setEnemyHealth(int value);
	void setEnemyDefense(int value);
	void setEnemySpeed(int value);
	void wildSwing();

};
#endif
