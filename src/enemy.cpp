#include "enemy.h"

using namespace std;

void enemy::setEnemyAttack(int value) {
	enemyAtk = this->setAtk(value);
}

void enemy::setEnemyHealth(int value) {
	this->setHealth(value);
}

void enemy::setEnemyDefense(int value) {
	this->setDefense(value);
}

void enemy::setEnemySpeed(int value) {
	this->setSpeed(value);
}

void enemy::wildSwing() {
	this->setAtk(enemyAtk + 5);
	//.. attack somehow
	//}
