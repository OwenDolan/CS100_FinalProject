//
//  Shop_Menu.hpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#ifndef Shop_Menu_hpp
#define Shop_Menu_hpp

#include <stdio.h>
#include "Menu.hpp"
#include "Item.h"
#endif /* Shop_Menu_hpp */

class Shop_Menu : public Menu {
  
public:
    void print();
    double sell(Item* i); //sell item from inventory in exchange for monies
    Item* buy(double m); //buy item with monies for item
    
};
