#include "../../header/Characters/Character.h"

using namespace std;

int Character::getHealth() {
	return this->health;

}

void Character::basicAtk() {
//	does damage in some way
}

void Character::setSpeed(int newSpeed) {
	this->speed = newSpeed;

}

void Character::setHealth(int newHealth) {
	this->health = newHealth;
}

void Character::setAtk(int newAtk) {
	this->atk = newAtk;
}
/*
void Character::setCurrency(int newCurrency) {
//	i cant access currency, have to figure that out
}
*/
void Character::setDefense(int newDefense) {
	this->defense = newDefense;
}

void Character::setMP(int newMP) {
	this->MP = newMP;
}

vector<Item*>& Character::returnInventory() {
	return inventory;
}

void Character::addToInventory(Item* i) {
	inventory.push_back(i);
}

void Character::removeFromInventory(Item* i) {
	vector<Item*>::iterator it = find(inventory.begin(), inventory.end(), i);
	int index = distance(inventory.begin(), it);
	inventory.erase(inventory.begin() + index);
}
