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

#endif /* Fight_Menu_hpp */

class Fight_Menu : public Menu {
  
public:
    void print(); //prints encounter prompt and displays actions
    int basicAttack(); //gets damage from character class
    int specialAttack();
    void itemCheck(); //displays what user has in inventory (can call from item_menu)
    void run(); //leave encounter
    //can add more functions like use item 
};
