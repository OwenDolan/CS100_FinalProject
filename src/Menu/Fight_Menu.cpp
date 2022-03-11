//
//  Fight_Menu.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#include "../../header/Menu/Fight_Menu.hpp"
#include <iostream>
#include <typeinfo>

using namespace std;

Character* Fight_Menu::print() { //prints encounter prompt and displays actions
    cout << "You've encountered an enemy" << endl;
    bool battle = true;
    int enemyHealth = 100;
    int attackMove = 0;
    while (battle) {
        cout << "What's the move?: 1. Basic Attack, 2. Special Attack | 3. Check Inventory | 4. Use Item | 5. Run" << endl;
        cin >> attackMove;
        while (cin.fail()) {
            cout << "invalid input, try again" << endl;
            cin.clear();
            cin.ignore();
            cin >> attackMove;
        }
        int damage = 0;
        if (attackMove == 1) {
            damage = basicAttack();
        }
        else if (attackMove == 2) {
            damage = specialAttack();
        }
        else if (attackMove == 3) {
            checkInventory();
        }
         else if (attackMove == 4) {
            int item;
            cout << "What item would you like to use?" << endl;
            checkInventory();
            cin >> item;
            while (cin.fail()) {
                cout << "invalid input, try again" << endl;
                cin.clear();
                cin.ignore();
                cin >> item;
            }
            vector<Item*> inventory = player->getInventory();
            Item* i = inventory.at(item);
            useItem(i);
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

    return returnPlayer();
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

Fight_Menu::Fight_Menu(Character* p) {
    player = p;
}

Character* Fight_Menu::returnPlayer() {
    return player;
}
void Fight_Menu::useItem(Item* i) {
    string s = typeid(i).name();
    if (dynamic_cast<Healing*> (i) != nullptr) {
        Healing* heal = dynamic_cast<Healing*> (i);
        int healing = heal->getHealAmount();
        int prevHealth = player->getHealth();
        player->setHealth(prevHealth += healing);
        //player->removeFromInventory(i);
    }
    /*
    else if (dynamic_cast<Armor*> (i) != nullptr) {
        Healing* heal = dynamic_cast<Healing*> (i);
        int healing = heal->getHealAmount();
        int prevHealth = player->getHealth();
        player->setHealth(prevHealth += healing);
    }
    */
}

void Fight_Menu::checkInventory() {
    vector<Item*> inventory = player->getInventory();
        for (int i = 0; i < inventory.size(); i++) {
            int num = i;
            cout << ++num << ". " << flush;
            inventory.at(i)->printItemName();
        }
}

//int Fight_Menu::chooseCharacter() { return 0; }
