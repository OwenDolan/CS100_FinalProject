#include <iostream>
#include "../../header/Menu/Menu.hpp"
#include "../../header/Menu/Shop_Menu.h"
#include "../../header/Characters/Character.h"
#include "../../header/Characters/Farmer.h"
#include "../../header/Items/Item.h"
#include "../../header/Items/Healing.h"
#include "../../header/Items/Weapon.h"
#include "../../header/Items/Armor.h"

using namespace std;

int main() {

    Character* player = new Farmer(100, 100, 100, 100);
    player->setCurrency(1000);
    ShopMenu shop = ShopMenu(player);
    player = shop.print();

    return 0;
}
