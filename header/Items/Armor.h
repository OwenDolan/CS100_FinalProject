#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

class Armor: public Item {
  public:
    Armor(int);
    int getDamageReduction();
    void display();
  private:
    int damageReduction;
    string classRestriction;
};

#endif
