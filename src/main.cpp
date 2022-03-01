//
//  main.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#include <iostream>
#include "Menu.hpp"
#include "Main_Menu.hpp"
#include "Fight_Menu.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    Main_Menu begin;
    begin.print();
    Fight_Menu fight;
    fight.print();
    return 0;
}
