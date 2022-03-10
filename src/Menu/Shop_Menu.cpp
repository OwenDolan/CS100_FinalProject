#include "../../header/Menu/Shop_Menu.h"
#include "../../header/Characters/Character.h"
#include "../../header/Items/Item.h"
#include "../../header/Items/Healing.h"
#include "../../header/Items/Weapon.h"
#include "../../header/Items/Armor.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

ShopMenu::ShopMenu(Character* player) {
  this->player = player;
}

Character* ShopMenu::print() {
  cout << "  ------------------------" << endl;
  cout << " |  Welcome to the shop!  | " << endl;
  cout << "  ------------------------" << endl;

  string userInput = menu();

  while (userInput != "leave") {
    if (userInput == "buy") {
      itemMenu();
    }
    else if (userInput == "sell") {
      cout << "*IMPLEMENT SELL FUNCTION (need storage menu class)*" << endl;
    }
    else {
      cout << "Invalid input, please try again" << endl;
    }

    userInput = menu();
  }

  cout << "You left the store" << endl;

  return this->player;
}

void ShopMenu::buy(Character* player, int item, string t) {
  int currentCurrency = player->getCurrency();

  if (t == "weapon") {
    Weapon* newItem = new Weapon(item);
  }
  else if (t == "armor") {
    Armor* newItem = new Armor(item);
  }
  else {
    Healing* newItem = new Healing(item);
  }

 /* if (player->getCurrency() >= newItem->getPrice()) {              price check *
    player->addInventory(newItem);
    currentCurrency = currentCurrency - newItem->getPrice() - 50;
    player->setCurrency(currentCurrency);

    cout << "You have bought the ";
    newItem->printItemName();
    cout << endl;
  }

  else {
    cout << "You don't have enough Okra to buy this item" << endl;
   // delete newItem;
  }*/
}

string ShopMenu::menu() {
  string choice;
  cout << "What would you like to do?" << endl;
  cout << " >Buy" << "   " << " >Sell" << "   " << " >Leave" << endl;

  cin >> choice;

  /* fix buffer just in case non-numeric choice entered
 *    also gets rid of newline character */
  cin.clear();
  cin.ignore(256, '\n');
  return choice;
}

void ShopMenu::itemMenu() {
  string shopChoice = itemMenuHelper();

  while (shopChoice != "exit") {
    if (shopChoice == "healing items") {
      healingMenu();
    }
    else if (shopChoice == "armor") {
      armorMenu();
    }
    else if (shopChoice == "weapons") {
      weaponMenu();
    }
    else {
      cout << "Invalid input, please try again" << endl;
    }

    shopChoice = itemMenuHelper();
  }
}

string ShopMenu::itemMenuHelper() {
  string input;

  cout << "What would you like to buy?" << endl;
  cout << " >Healing Items" << "   " << " >Armor" << "   " << " >Weapons" << "   " << ">Exit" << endl;

  getline(cin, input);

  return input;
}

void ShopMenu::healingMenu() {
  cout << "  -----------------  " << endl;
  cout << " |  HEALING ITEMS  | " << endl;
  cout << "  -----------------  " << endl;

  createHealingList();
  cout << "*Tip: Type the number of the item you wish to buy*" << endl;
}

void ShopMenu::armorMenu() {
  cout << "  ----------  " << endl;
  cout << " |  ARMORS  | " << endl;
  cout << "  ----------  " << endl;

  createArmorList();
  cout << "*Tip: Type the number of the item you wish to buy*" << endl;
}

void ShopMenu::weaponMenu() {
  cout << "  -----------  " << endl;
  cout << " |  WEAPONS  | " << endl;
  cout << "  -----------  " << endl;

  createWeaponList();
  cout << "*Tip: Type the number of the item you wish to buy*" << endl;

  int weaponChoice;
  string type = "weapon";

  cin >> weaponChoice;

  cin.clear();
  cin.ignore(256, '\n');

  if (weaponChoice <= 0 || weaponChoice > NUM_WEAPONS) {
    cout << "Invalid item" << endl;
  }
  else {
    buy(player, weaponChoice, type);
  }
}

void ShopMenu::createHealingList() {
  int i = 0;
  vector<Healing> healingItems;

  while (i < NUM_HEALING_ITEMS) {
    healingItems.push_back(Healing(i + 1));
    cout << i + 1 << ". ";
    healingItems.at(i).display();
    i += 1;
  }
}

void ShopMenu::createWeaponList() {
  int i = 0;
  vector<Weapon> weapons;

  while (i < NUM_WEAPONS) {
    weapons.push_back(Weapon(i + 1));
    cout << i + 1 << ". ";
    weapons.at(i).display();
    i += 1;
  }
}

void ShopMenu::createArmorList() {
  int i = 0;
  vector<Armor> armors;

  while (i < NUM_ARMOR) {
    armors.push_back(Armor(i + 1));
    cout << i + 1 << ". ";
    armors.at(i).display();
    i += 1;
  }
}
