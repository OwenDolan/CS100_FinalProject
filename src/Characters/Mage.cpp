#include "Mage.h"

using namespace std;


int Mage::basicAtk() {
	return 5;
}

int Mage::mageSpecial1() {
	mageSpecialName = "Fire Ball";
	return 10;
}

int Mage::mageSpecial2() {
	mageSpecialName = "Icy Wind";
	return 10;
}

int Mage::mageSpecial3() {
	mageSpecialName = "Lightning Rose";
	return 10;
}


string Mage::getSkillName() {
	return mageSpecialName;
}

