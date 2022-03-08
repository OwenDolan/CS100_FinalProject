#include "Paladin.h"

using namespace std;

int Paladin::basicAtk() {
	return 5;
}

int Paladin::paladinSpecial1() {
	paladinSpecialName = "Tide Caller";
	this->setDefense(this->getDefense() + 5);
	return 5;
}


void Paladin::paladinSpecial2() {
	paladinSpecialName = "Heal";
	int currentHealth = this->getHealth();
	int newHealth = currentHealth + 100;
	this->setHealth(newHealth);
	
}

string Paladin::getSkillName() {
	return paladinSpecialName;

}
