#include "Warrior.h"

using namespace std;

int Warrior::basicAtk() {
	return 5;
}
int Warrior::warriorSpecial1() {
	bloodLustActive = true;
	fatigue = false;
	warriorSpecialName = "Resonant Smash";
	return 5;
}

int Warrior::warriorSpecial2() {
	warriorSpecialName = "Shield Bash";
	if (fatigue == true && bloodLustActive == false) {
		fatigue = false;
		return 3;
	}
	else if (bloodLustActive == true && fatigue == false)
	{
		fatigue = true;
		return 10;
	}
	else {
		return 5;
	}

}
