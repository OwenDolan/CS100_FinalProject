//
//  Main_Menu.hpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#ifndef Main_Menu_hpp
#define Main_Menu_hpp

#include <stdio.h>
#include "Menu.hpp"

#endif /* Main_Menu_hpp */

class Main_Menu : public Menu {
private:
    void movingCommands(); //?
    void speedUpButton(); //speed up how fast text is displayed to screen
    
public:
    void print(); //prints welcome message and menu options
    void exit(); //needs to call destructor and confirms exit
    int chooseCharacter(); //choses character and returns selection to main where it creates the player on the heap
    
};
