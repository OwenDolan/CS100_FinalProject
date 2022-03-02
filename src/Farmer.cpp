#include "Farmer.h"

using namespace std;

int Farmer::basicAtk() {
	return 5;
}

void Farmer::infiniteattack() {
	this->setAtk(10000);
}

void Farmer::infiniteHealth() {
	this->setHealth(100000);
}

void Farmer::infiniteDefense() {
	this->setDefense(100000);
}

void Farmer::infiniteMP() {
	this->setMP(100000);
}

int Farmer::farmerSpecial1() {
	farmerSpecialName = "Sickle Slash";
	return 1;
}

void Farmer::farmerSpecial2() {
	farmerSpecialName = "Grow Food";
	return 0;
}

