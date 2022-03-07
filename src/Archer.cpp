#include "Archer.h"

using namespace std;

int Archer::basicAtk() {
	return 5;
}
void Archer::setElement(string newElement) {
	this->element = newElement;
}



int Archer::archerSpecial1() {
	archerSpecialName = "Rain Of Arrows";
	return 5;
}

int Archer::archerSpecial2() {
	for (int i = 0; i < 5; i++) {
		if (arr[i] == "fire" && this->element == "fire") {
			archerSpecialName = "Fire Arrow";
			return 5;
		}
		else if (arr[i] == "water" && this->element == "water") {
			archerSpecialName = "Water Arrow";
			return 5;
		}
		else if (arr[i] == "ice" && this->element == "ice") {
			archerSpecialName = "Ice Arrow";
			return 5;
		}
		else if (arr[i] == "lightning" && this->element == "lightning") {
			archerSpecialName = "Lightning Arrow";
			return 5;
		}
		else if (arr[i] == "wind" && this->element == "wind") {
			archerSpecialName = "Wind Arrow";
			return 5;
		}
		else {
			cout << "You have no element set!" << endl;
			return 0;
		}
	}
	
	

	
}

string Archer::getSkillName() {
	return archerSpecialName;
}
