#include "enemy.h"

using namespace std;

enemy::enemy(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

int enemy::basicAtk() {
	return 2;
}
int enemy::specialSkil1() {
	enemySpecialName = "Wild Swing";
	return 3;
}

string enemy::getSkillName() {
	return enemySpecialName;
}
