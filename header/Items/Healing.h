#ifndef HEALING_H
#define HEALING_H

#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

class Healing: public Item {
  public:
    Healing(int);
    int getHealAmount();
    void display();
  private:
    int healAmount;
};

#endif
