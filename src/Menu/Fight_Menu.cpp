//
//  Fight_Menu.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#include "Fight_Menu.hpp"
#include <iostream>
using namespace std;

void Fight_Menu::print() { //prints encounter prompt and displays actions
    cout << "You've encountered a wild <insert enemy here>" << endl;
    bool battle = true;
    int enemyHealth = 100;
    int attackMove = 0;
    while (battle) {
        cout << "What's the move?: 1. Basic Attack, 2. Special Attack | 3. Check Inventory | 4. Use Item | 5. Run" << endl;
        cin >> attackMove;
        if (cin.fail()) {
            cout << "invalid input, try again" << endl;
            cin.clear();
            cin.ignore();
        }
        else {
            int damage = 0;
            if (attackMove == 1) {
                damage = basicAttack();
            }
            else if (attackMove == 2) {
                damage = specialAttack();
            }
            else if (attackMove == 3) {
                //get inventory from character and display
            }
            else if (attackMove == 4) {
                //use item
            }
            else if (attackMove == 5) {
                battle = false;
                cout << "You have sucessfully fled the encounter." << endl;
                run();
            }
            else {
                cout << "invalid input. You miss and " << flush;
            }
            cout << "You have dealt " << damage << " damage." << endl;
            enemyHealth -= damage;
            if (enemyHealth <= 0) {
                battle = false;
            }
            cout << "Enemy has " << enemyHealth << " hp left." << endl;
        }
    }
}
int Fight_Menu::basicAttack() { //gets damage from character class
    return 10; //change later to interact with character class
}
int Fight_Menu::specialAttack() {
    return 20; //ditto
}
void Fight_Menu::itemCheck() { //displays what user has in inventory (can call from item_menu)
    //needs to get items stored from inventory
}
void Fight_Menu::run() { //leave encounter
    //implement to return to a different scene
}
