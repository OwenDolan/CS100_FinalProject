#include "Archer.h"

using namespace std;

void Archer::setArcherAttack(int value) {
	Character::setAtk(value);
}

void Archer::setElement(string newElement) {
	this->element = newElement;
}

void Archer::setArcherSpeed(int value) {
	this->setSpeed(value);
}

void Archer::rainOfArrows() {
	//..	
}

void Archer::elementalArrow() {
	for (int i = 0; i < 5; i++) {
		if (arr[i] == "fire" && this->element == "fire") {
			//..			
		}
		else if (arr[i] == "water" && this->element == "water") {
			//..	
		}
		else if (arr[i] == "ice" && this->element == "ice") {
			//,,	
		}
		else if (arr[i] == "lightning" && this->element == "lightning") {
			//..	
		}
		else if (arr[i] == "wind" && this->element == "wind") {
			//..			
		}
		else {
			cout << "You have no element set!" << endl;
		}
	}
}


