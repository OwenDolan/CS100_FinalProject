#include "../../header/Characters/Paladin.h"

using namespace std;

Paladin::Paladin(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

int Paladin::basicAtk() {
	return this->getAtk();
}

int Paladin::specialSkill() {
	paladinSpecialName = "Tide Caller";
	this->setDefense(this->getDefense() + 5);
	return this->getAtk() +  5;
}


string Paladin::getSkillName() {
	return paladinSpecialName;

}
