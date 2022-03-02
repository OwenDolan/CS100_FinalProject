#include "Character.h"

using namespace std;


Character::Character(int h, int s, int d, int a) {
	setHealth(h);
	setSpeed(s);
	setDefense(d);
	setAtk(a);
}

int Character::getHealth() {
	return health;

}

int Character::getDefense() {
	return defense;
}

int Character::getSpeed() {
	return speed;
}

int Character::getAtk() {
	return atk;
}


void Character::setSpeed(int newSpeed) {
	speed = newSpeed;

}

void Character::setHealth(int newHealth) {
	health = newHealth;
}

void Character::setAtk(int newAtk) {
	atk = newAtk;
}



void Character::setDefense(int newDefense) {
	defense = newDefense;
}


