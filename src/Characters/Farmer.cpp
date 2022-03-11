#include "../../header/Characters/Farmer.h"

using namespace std;

Farmer::Farmer(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

int Farmer::basicAtk() {
	return this->getAtk();
}

void Farmer::infiniteAttack() {
	this->setAtk(10000);
}

void Farmer::infiniteHealth() {
	this->setHealth(100000);
}

void Farmer::infiniteDefense() {
	this->setDefense(100000);
}


int Farmer::specialSkill() {
	farmerSpecialName = "Sickle Slash";
	return this->getAtk() + 1;
}

string Farmer::getSkillName() {
	return farmerSpecialName;
}
