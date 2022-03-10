//
//  menu.hpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#ifndef MENU_HPP
#define MENU_HPP

#pragma once

#include <stdio.h>
#include "../Characters/Character.h"
#endif /* menu_hpp */

class Character;

class Menu {

public:
    virtual Character* print() = 0; // pure virtual to be implemented in derived classes

};
