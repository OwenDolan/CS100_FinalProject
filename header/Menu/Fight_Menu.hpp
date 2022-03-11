//
//  Fight_Menu.hpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#ifndef Fight_Menu_hpp
#define Fight_Menu_hpp

#include <stdio.h>
#include "Menu.hpp"
#include "../Characters/Character.h"
#include "../../header/Items/Healing.h"
#include "../../header/Items/Weapon.h"
#include "../../header/Items/Armor.h"
#endif /* Fight_Menu_hpp */

class Fight_Menu : public Menu {
  
public:
    Character* player;
    Fight_Menu(Character* p);
    Character* print(); //prints encounter prompt and displays actions
    int basicAttack(); //gets damage from character class
    int specialAttack();
    void itemCheck(); //displays what user has in inventory (can call from item_menu)
    void run(); //leave encounter
    //can add more functions like use item 
    Character* returnPlayer(); //to be called at conclusion of fight to update player
    void useItem(Item* i); //function that finds out what type of item and uses accordingly
    void checkInventory(); // prints inventory
};
