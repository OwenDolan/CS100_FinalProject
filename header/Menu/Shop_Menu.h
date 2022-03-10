#ifndef SHOPMENU_H
#define SHOPMENU_H

#include "Menu.hpp"
#include "../Items/Item.h"
#include "../Characters/Character.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int NUM_HEALING_ITEMS = 8;
const int NUM_WEAPONS = 9;
const int NUM_ARMOR = 9;

class ShopMenu: public Menu {
  public:
    ShopMenu(Character*);
    Character* print();
    void buy(Character*, int, string);
    Item* sell();
  private:
    Character* player;
    /*Helper functions*/
    string menu();              /*For choosing options when entering shop (Buy, Sell, Leave)*/
    void itemMenu();            /*Displays categories of items in shop*/
    string itemMenuHelper();    /*Choose category*/
    void healingMenu();         /*Display all healing items*/
    void createHealingList();
    void weaponMenu();          /*Display all weapons*/
    void createWeaponList();
    void armorMenu();           /*Display all armors*/
    void createArmorList();
};

#endif
