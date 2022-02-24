#include "Farmer.h"

using namespace std;

//void Farmer::infiniteMoney() {
//	cant access currency yet
//} 

void Farmer::infiniteAttack() {
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

void Farmer::sickleSlash() {
	this->basicAtk();
}

void Farmer::growFood() {
	//?
}
