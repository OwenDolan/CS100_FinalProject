#include "../../header/Characters/enemy.h"

using namespace std;

enemy::enemy(int h, int s, int d, int a, string n)
	:Character(h, s, d, a)
{enemyName = n;}

int enemy::basicAtk() {
	return this->getAtk();
}
int enemy::specialSkill() {
	enemySpecialName = "Wild Swing";
	return this->getAtk() + 3;
}

string enemy::getSkillName() {
	return enemySpecialName;
}


