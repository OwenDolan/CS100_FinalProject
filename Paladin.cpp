#include "Paladin.h"

using namespace std;

void Paladin::setPaladinAttack(int value) {
	this->setAtk(value);
}

void Paladin::setPaladinDefense(int value) {
	this->setDefense(value);
}

void Paladin::tideCaller() {
	//..
}

//void Paladin::partyProtect() {
//
//}

void Paladin::heal() {
	int currentHealth = this->getHealth();
	int newHealth = currentHealth + 100;
	this->setHealth(newHealth);
	
}
