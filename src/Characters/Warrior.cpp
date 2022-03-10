#include "Warrior.h"

using namespace std;

Warrior::Warrior(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

int Warrior::basicAtk() {
	return 5;
}
int Warrior::specialSkil1() {
	warriorSpecialName = "Resonant Smash";
	return 5;
}

string Warrior::getSkillName() {
	return warriorSpecialName;
}
