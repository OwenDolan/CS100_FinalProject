#include "../../header/Characters/Archer.h"

using namespace std;

Archer::Archer(int h, int s, int d, int a) 
	:Character(h, s, d, a)
{}

int Archer::basicAtk() {
	return this->getAtk();
}



int Archer::specialSkill() {
	archerSpecialName = "Rain Of Arrows";
	return this->getAtk() + 5;
}

string Archer::getSkillName() {
	return archerSpecialName;
}
