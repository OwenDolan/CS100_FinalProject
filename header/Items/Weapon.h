#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

class Weapon: public Item {
  public:
    Weapon(int);
    int getDamageModifier();
    void display();
  private:
    int damageModifier;
    string classRestriction;
};

#endif
