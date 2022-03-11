#include "../../header/Items/Item.h"
#include "../../header/Items/Healing.h"

#include <iostream>
#include <string>

using namespace std;

Healing::Healing(int itemNum) {
  switch (itemNum) {
    case 1:
      itemName = "Potion";
      description = "";
      healAmount = 25;
      price = 50;
      break;
    case 2:
      itemName = "Hi-Potion";
      description = "";
      healAmount = 50;
      price = 90;
      break;
    case 3:
      itemName = "Mega-Potion";
      description = "";
      healAmount = 75;
      price = 150;
      break;
    case 4:
      itemName = "Elixir";
      description = "";
      healAmount = 100;
      price = 200;
      break;
    case 5:
      itemName = "Ether";
      description = "";
      healAmount = 15;
      price = 75;
      break;
    case 6:
      itemName = "Hi-Ether";
      description = "";
      healAmount = 50;
      price = 50;
      break;
    case 7:
      itemName = "Max-Ether";
      description = "";
      healAmount = 75;
      price = 150;
      break;
    case 8:
      itemName = "Miracle Cure";
      description = "";
      healAmount = 100;
      price = 350;
      break;
  }

  useable = true;
  equipable = false;
  deletable = true;
}

int Healing::getHealAmount() {
  return healAmount;
}

void Healing::display() {
  printItemName();
  cout << "Price: " << getPrice() << " Okra" << endl;
  cout << "Effect: Heals +" << healAmount << "% of max Hp and/or Mp" << endl;
  printDescription();
}
