#include "../../header/Items/Item.h"
#include "../../header/Items/Weapon.h"

#include <iostream>
#include <string>

using namespace std;

Weapon::Weapon(int itemNum) {
  switch (itemNum) {
    case 1:
      itemName = "Sturdy Broadsword";
      description = "";
      damageModifier = 10;
      price = 100;
      break;
    case 2:
      itemName = "Platinum Longsword and Shield";
      description = "";
      damageModifier = 15;
      price = 500;
      break;
    case 3:
      itemName = "Oak Wand";
      description = "";
      damageModifier = 8;
      price = 100;
      break;
    case 4:
      itemName = "Staff of the Nymph";
      description = "";
      damageModifier = 12;
      price = 500;
      break;
    case 5:
      itemName = "Sturdy Battleaxe";
      description = "";
      damageModifier = 14;
      price = 100;
      break;
    case 6:
      itemName = "Nero's Hammer";
      description = "";
      damageModifier = 20;
      price = 500;
      break;
    case 7:
      itemName = "Sturdy Longbow";
      description = "";
      damageModifier = 9;
      price = 100;
      break;
    case 8:
      itemName = "Massive Shotgun";
      description = "";
      damageModifier = 16;
      price = 500;
      break;
    case 9:
      itemName = "Farmer's Sickle";
      description = "";
      damageModifier = 100;
      price = 1000;
      break;
  }

  useable = false;
  equipable = true;
  deleteable = true;
}

int Weapon::getDamageModifier() {
  return damageModifier;
}

void Weapon::display() {
  printItemName();
  cout << "Price: " << getPrice() << " Okra" << endl;
  cout << "Effect: Attack damage +" << damageModifier << endl;
  printDescription();
}
