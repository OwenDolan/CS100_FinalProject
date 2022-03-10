#include "../../header/Characters/Character.h"

using namespace std;


Character::Character(int h, int s, int d, int a) {
	setHealth(h);
	setSpeed(s);
	setDefense(d);
	setAtk(a);
}

int Character::getHealth() {
	return health;

}

int Character::getDefense() {
	return defense;
}

int Character::getSpeed() {
	return speed;
}

int Character::getAtk() {
	return atk;
}

int Character::getCurrency() {
	return currency;
}

void Character::setCurrency(int newCurrency) {
	currency = newCurrency;
}
void Character::setSpeed(int newSpeed) {
	speed = newSpeed;

}

void Character::setHealth(int newHealth) {
	health = newHealth;
}

void Character::setAtk(int newAtk) {
	atk = newAtk;
}



void Character::setDefense(int newDefense) {
	defense = newDefense;
}

vector<Item*> Character::getInventory() {
	return inventory;
}

void Character::addInventory(Item *i) {
	inventory.push_back(i);
}
