#include "Farmer.h"

using namespace std;

Farmer::Farmer(int h, int s, int d, int a)
	:Character(h, s, d, a)
{}

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

int Farmer::specialSkill() {
	farmerSpecialName = "Sickle Slash";
	return 1;
}

string Farmer::getSkillName() {
	return farmerSpecialName;
}
