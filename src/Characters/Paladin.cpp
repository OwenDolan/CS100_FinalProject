#include "Paladin.h"

using namespace std;

Paladin::Paladin(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

int Paladin::basicAtk() {
	return 5;
}

int Paladin::specialSkil1() {
	paladinSpecialName = "Tide Caller";
	this->setDefense(this->getDefense() + 5);
	return 5;
}


string Paladin::getSkillName() {
	return paladinSpecialName;

}
