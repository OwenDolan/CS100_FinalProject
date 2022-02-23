#include "Warrior.h"

using namespace std;

void Warrior::setWarriorAttack(int value) {
	this->setAtk(value);
}

void Warrior::resonantSmash() {
	bloodLustActive = true;
	fatigue = true;
}

void Warrior::shieldBash() {
	this->setDefense(0);
	this->setAtk(100); // or something a lot higher
}
