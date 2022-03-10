//
//  main.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//  Last edited by Steven Leonido 3/9/22

#include <iostream>
//#include "../header/Menu/Menu.hpp"
#include "../header/Menu/Main_Menu.hpp"
#include "../header/Menu/Fight_Menu.hpp"
#include "../header/Characters/Character.h"
#include "../header/Characters/Archer.h"
#include "../header/Characters/Warrior.h"
#include "../header/Characters/Mage.h"
#include "../header/Characters/Paladin.h"
#include "../header/Characters/Farmer.h"
#include "../header/Items/Healing.h"
#include "../header/Scene/scene.h"
#include "../header/Scene/eventscene.h"

using namespace std;

Character* player;

void choosePlayer(int choice) {
    if (choice == 1) {
        player = new Archer();
    }
    else if (choice == 2) {
        player = new Warrior();
    }
    else if (choice == 3) {
        player = new Mage();
    }
    else if (choice == 4) {
        player = new Paladin();
    }
    else if (choice == 5) {
        player = new Farmer();
    }
    else {
        cout << "invalid input received, restart game :) " << endl;
    }

}

int main(int argc, const char * argv[]) {
    Menu* begin = new Main_Menu();
    vector<Item*> createList; //currently empty to initialize event scene
    string explainGame = "The world you are about to embark in is Vanguard, a fantasy RPG where you will be able to fight enemies, go on quests, earn money (Okra) and buy items to level up your character!\n";
    string explainIntroScreen = "You wake up in a desolate place that seems like purgatory. You had previously passed on from your previous life after getting hit by a truck rather abruptly.\n\n A small spirit that totally looks like a rip-off from Legends of Zelda comes down from the sky. It projects a small screen in front of you.\n";
    Scene* start = new EventScene(explainGame, explainIntroScreen, begin, createList);

    start->outputDescrip();
    start->outputIntroStory();
    start->getMenu()->print();
    int playerChoice = start->getMenu()->chooseCharacter();
    choosePlayer(playerChoice);
    Item* i = new Healing(1);
    player->addToInventory(i);

    Fight_Menu fight(player);
    fight.print();
    
    delete start;
    delete player;
    delete i;

    return 0;
}
