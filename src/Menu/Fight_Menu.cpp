//
//  Fight_Menu.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#include "../../header/Menu/Fight_Menu.hpp"
#include <iostream>
#include <typeinfo>
#include <stdlib.h>
using namespace std;

void Fight_Menu::initializeEnemy(enemy* e) {
    enemie = e;
}

Character* Fight_Menu::print() { //prints encounter prompt and displays actions
    cout << "You've encountered a wild " << enemie->enemyName << endl;
    bool battle = true;
    int enemyHealth = enemie->getHealth();
    int attackMove = 0;
    //instantiatePlayer();
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
            damage = player->getAtk();
        }
        else if (attackMove == 2) {
            damage = player->specialSkill();
            cout << "You use " << player->getSkillName() << endl;
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
            item -= 1;
            Item* i = inventory.at(item);
            useItem(i, item);
        }
        else if (attackMove == 5) {
            battle = false;
            cout << "You have sucessfully fled the encounter." << endl;
            break;
        }
        else {
            cout << "invalid input. You miss and " << flush;
        }
        cout << "You have dealt " << damage << " damage." << endl;
        enemyHealth -= damage;
        if (enemyHealth <= 0) {
            battle = false;
            break;
        }
        cout << "Enemy has " << enemyHealth << " hp left." << endl;

        if (enemie->enemyName == "Drunkard") {
            int d = enemie->specialSkill();
        }
        else if (enemie->enemyName == "Griffin") {
            int d = enemie->specialSkill1();

        }
        else {
            int d = enemie->specialSkill2();

        }
        cout << "Enemy attacks you with a " << enemie->enemy::getSkillName() << endl;
        if (enemie->getAtk() == 0) {
            cout << "He missed" << endl;
        }
        cout << "He deals " << enemie->getAtk() << " damage." << endl;
        
        int health = player->getHealth();
        if(enemie->getAtk()-player->getDefense() >= 0) {
            health -= enemie->getAtk()-player->getDefense();
            player->setHealth(health);
        }
        else {
            cout << "Your armor has absorbed the attack. You take no damage" << endl;
        }
        cout << "You have " << player->getHealth() << " hp left." << endl;

        if (player->getHealth() <= 0) {
            battle = false;
            cout << "You died...rip" << endl;
            exit(0);
        }
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
void Fight_Menu::useItem(Item* i, int index) {
    string s = typeid(i).name();
    if (dynamic_cast<Healing*> (i) != nullptr) {
        Healing* heal = dynamic_cast<Healing*> (i);
        int healing = heal->getHealAmount();
        int prevHealth = player->getHealth();
        player->setHealth(prevHealth += healing);
        player->removeFromInventory(index);
        cout << "You use the potion and gain " << healing << " HP." << endl;
    }
    else if (dynamic_cast<Weapon*> (i) != nullptr) {
        Weapon* w = dynamic_cast<Weapon*> (i);
        player->setAtk(player->getAtk() * w->getDamageModifier());
        player->removeFromInventory(index);
        cout << "You now wield " << flush; w->printItemName(); cout << " your damage has increased by " << w->getDamageModifier() << "x." << endl;
    }
    else if (dynamic_cast<Armor*> (i) != nullptr) {
        Armor* w = dynamic_cast<Armor*> (i);
        player->setDefense(player->getDefense()+w->getDamageReduction());
        player->removeFromInventory(index);
        cout << "You now don the " << flush; w->printItemName(); cout << " your defense has increased by " << w->getDamageReduction() << "." << endl;
    }
    
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
