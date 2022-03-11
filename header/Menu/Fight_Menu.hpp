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
#include "../Characters/Archer.h"
#include "../Characters/Warrior.h"
#include "../Characters/Mage.h"
#include "../Characters/Paladin.h"
#include "../Characters/Farmer.h"
#include "../Characters/enemy.h"
#include "../../header/Items/Healing.h"
#include "../../header/Items/Weapon.h"
#include "../../header/Items/Armor.h"
#endif /* Fight_Menu_hpp */

class Fight_Menu : public Menu {
  
public:
    int ch;
    enemy* enemie;
    Character* player;
    Fight_Menu(Character* p);
    Character* print(); //prints encounter prompt and displays actions
    int basicAttack(); //gets damage from character class
    int specialAttack();
    void itemCheck(); //displays what user has in inventory (can call from item_menu)
    void run(); //leave encounter
    //can add more functions like use item 
    Character* returnPlayer(); //to be called at conclusion of fight to update player
    void useItem(Item* i, int index); //function that finds out what type of item and uses accordingly
    void checkInventory(); // prints inventory
    void initializeEnemy(enemy* e);
    /*
    void instantiatePlayer() {
     if (ch == 1) {
         dynamic_cast<Archer*>(player);
     }
     else if (ch == 2) {
        dynamic_cast<Warrior*>(player);

     }
     else if (ch == 3) {
        dynamic_cast<Mage*>(player);

     }
     else if (ch == 4) {
        dynamic_cast<Paladin*>(player);

     }
     else if (ch == 5) {
        dynamic_cast<Farmer*>(player);

     }
 }
 */
};
