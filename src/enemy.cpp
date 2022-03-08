#include "enemy.h"

using namespace std;

int enemy::basicAtk() {
	return 2;
}
int enemy::enemySpecial1() {
	enemySpecialName = "Wild Swing";
	return 3;
}

string enemy::getSkillName() {
	return enemySpecialName;
}
