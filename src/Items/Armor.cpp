#include "Item.h"
#include "Armor.h"

#include <iostream>
#include <string>

using namespace std;

Armor::Armor(int itemNum) {

  switch (itemNum) {
    case 1:
      itemName = "Light Armor";
      description = "";
      damageReduction = 25;
      price = 100;
      break;
    case 2:
      itemName = "Holy Armor";
      description = "";
      damageReduction = 50;
      price = 300;
      break;
    case 3:
      itemName = "Light Robe";
      description = "";
      damageReduction = 10;
      price = 100;
      break;
    case 4:
      itemName = "Magical Robe";
      description = "";
      damageReduction = 28;
      price = 300;
      break;
    case 5:
      itemName = "Wolf Pelt";
      description = "";
      damageReduction = 20;
      price = 100;
      break;
    case 6:
      itemName = "Warrior's Pelt";
      description = "";
      damageReduction = 43;
      price = 300;
      break;
    case 7:
      itemName = "Light Tunic";
      description = "";
      damageReduction = 15;
      price = 100;
      break;
    case 8:
      itemName = "Fitted Jacket of Aiming";
      description = "";
      damageReduction = 35;
      price = 300;
      break;
    case 9:
      itemName = "Straw Hat";
      description = "";
      damageReduction = 1000;
      price = 1000;
      break;
  }

  useable = false;
  equipable = true;
  deleteable = true;
}

int Armor::getDamageReduction() {
  return damageReduction;
}

void Armor::display() {
  printItemName();
  cout << "Price: " << getPrice() << " Okra" << endl;
  cout << "Effect: Health increase by +" << damageReduction <<  endl;
  printDescription();
}
