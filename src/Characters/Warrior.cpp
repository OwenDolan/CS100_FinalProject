#include "../../header/Characters/Warrior.h"

using namespace std;

Warrior::Warrior(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

int Warrior::basicAtk() {
	return this->getAtk();
}
int Warrior::specialSkill() {
	warriorSpecialName = "Resonant Smash";
	return this->getAtk() + 5;
}

string Warrior::getSkillName() {
	return warriorSpecialName;
}
