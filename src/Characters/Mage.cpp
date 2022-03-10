#include "../../header/Characters/Mage.h"

using namespace std;


Mage::Mage(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

int Mage::basicAtk() {
	return 5;
}

int Mage::specialSkill() {
	mageSpecialName = "Fire Ball";
	return 10;
}

string Mage::getSkillName() {
	return mageSpecialName;
}

