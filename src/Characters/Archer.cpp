#include "../../header/Characters/Archer.h"

using namespace std;

Archer::Archer(int h, int s, int d, int a) 
	:Character(h, s, d, a)
{}

int Archer::basicAtk() {
	return 5;
}



int Archer::specialSkill() {
	archerSpecialName = "Rain Of Arrows";
	return 5;
}

string Archer::getSkillName() {
	return archerSpecialName;
}
