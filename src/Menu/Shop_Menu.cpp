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
      sell(this->player);
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
  Item* newItem;

  if (t == "weapon") {
    newItem = new Weapon(item);
  }
  else if (t == "armor") {
    newItem = new Armor(item);
  }
  else {
    newItem = new Healing(item);
  }

 if (player->getCurrency() >= newItem->getPrice()) {             /* price check */
    player->addInventory(newItem);
    currentCurrency = currentCurrency - newItem->getPrice();
    player->setCurrency(currentCurrency);

    cout << "You have bought the ";
    newItem->printItemName();
    cout << endl;
  }
  else {
    cout << "You don't have enough Okra to buy this item" << endl;
    delete newItem;
  }
}

void ShopMenu::sell(Character* player) {
  cout << "  -----------------  " << endl;
  cout << " |    INVENTORY    | " << endl;
  cout << "  -----------------  " << endl;

  int currentCurrency = player->getCurrency();

  if (player->getInventory().size() == 0) {
    cout << "Your inventory is empty! There's nothing to sell" << endl;
    return;
  }

  for (int i = 0; i <= player->getInventory().size() - 1; ++i) {
    cout << i+1 << ". ";
    player->getInventory().at(i)->printItemName();
  }

  cout << "What would you like to sell?" << endl;
  cout << "*Tip: Type the number of the item you wish to sell*" << endl;

  int sellChoice;
  cin >> sellChoice;;

  cin.clear();
  cin.ignore(256, '\n');

  if (sellChoice == 0 || sellChoice > player->getInventory().size()) {
    cout << "Invalid choice" << endl;
  }
  else if (player->getInventory().at(sellChoice-1)->getDeletable() == false) {
    cout << "You cannot sell that item" << endl;
  }
  else {
    cout << "You sold the ";
    player->getInventory().at(sellChoice-1)->printItemName();
    cout << "for " << player->getInventory().at(sellChoice-1)->getPrice() << " Okra" << endl;
    currentCurrency += player->getInventory().at(sellChoice - 1)->getPrice();

    delete player->getInventory()[sellChoice-1];
    player->getInventory().erase(player->getInventory().begin() + (sellChoice - 1));

    player->setCurrency(currentCurrency);
  }
}

string ShopMenu::menu() {
  string choice;
  cout << "Currency: " << player->getCurrency() << " Okra" << endl;
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

  int healingChoice;
  string type = "healing";

  cin >> healingChoice;

  cin.clear();
  cin.ignore(256, '\n');

  if (healingChoice <= 0 || healingChoice > NUM_HEALING_ITEMS) {
    cout << "Invalid item" << endl;
  }
  else {
    buy(player, healingChoice, type);
  }
}

void ShopMenu::armorMenu() {
  cout << "  ----------  " << endl;
  cout << " |  ARMORS  | " << endl;
  cout << "  ----------  " << endl;

  createArmorList();
  cout << "*Tip: Type the number of the item you wish to buy*" << endl;

  int armorChoice;
  string type = "armor";

  cin >> armorChoice;

  cin.clear();
  cin.ignore(256, '\n');

  if (armorChoice <= 0 || armorChoice > NUM_ARMOR) {
    cout << "Invalid item" << endl;
  }
  else {
    buy(player, armorChoice, type);
  }
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
