#ifndef REWORKSCENE_HPP
#define REWORKSCENE_HPP
#pragma once
#include <iostream>
#include "../Menu/Main_Menu.hpp"
#include "../Menu/Fight_Menu.hpp"
#include "../Characters/Character.h"
#include "../Characters/Paladin.h"
#include "../Characters/Archer.h"
#include "../Characters/Farmer.h"
#include "../Characters/Mage.h"
#include "../Characters/Warrior.h"
#include "../Characters/enemy.h"
#include "../Menu/Shop_Menu.h"
//#include "../Menu/Item_Menu.hpp"

class Scene {
protected:
    string descrip; //desscribes area you are in
    string story;  // tells you what is going on in the story
    Character* player; //points to player to use in print
    int ch;

public:
    Scene(string d, string s, Character* c, int choice) {
        descrip = d;
	story = s;
	player = c;
    ch = choice;
    }

    virtual void print() = 0;

    Character* getPlayer() { return player; }

    string getDescrip() { return descrip; }

    string getStory() { return story; }

    void instantiatePlayer();

};


class BarFightScene : public Scene {
public:

    BarFightScene(string d, string s, Character* c, int choice) : Scene(d, s ,c, choice) { }

    void print() {
       // instantiatePlayer();
        cout << descrip << endl;
        cout << story << endl;

	Fight_Menu fight(player);
	enemy* drunkard = new enemy(50, 2, 0, 0,"Drunkard");
    fight.initializeEnemy(drunkard);
	player = fight.print(); //will be typed differently when Fight_Menu is complete
    delete drunkard;
    cout << "The barman slides you 100 Okra and says, \"Thanks for dealing with the riff-raff\"" << endl;
    int curr = player->getCurrency();
    player->setCurrency(curr + 100);
    }
};

class GuildScene : public Scene {

public:

    GuildScene(string d, string s, Character* c, int choice) : Scene(d, s, c, choice) { }

    void print() {
                //instantiatePlayer();

	cout << descrip << endl;
        cout << story << endl;

	char decision = 'a';
	ShopMenu Shop(player);
	//Item_Menu Inv(player);

	while (decision != '3') {
	    cout << "What would you like to do?" << endl;
	    cout << "1 - Look at Inventory\n2 - Go to the shop\n3 - Take up a quest\n" << endl;
	    cin >> decision;
        Fight_Menu fight(player);
	    if (decision == '1') {
		fight.checkInventory();
	    }
	    else if (decision == '2') {
		Shop.print();
	    }
	    else if (decision == '3') {
		cout << "You pick a quest from the board and head out" << endl;
	    }
	    else {
		cout << "Invalid input, try again" << endl;
	    }

	}

    }

}; 

class QuestFightScene : public Scene {
public:

    QuestFightScene(string d, string s, Character* c,int choice) : Scene(d, s ,c,choice) { }

    void print() {
                //instantiatePlayer();

        cout << descrip << endl;
        cout << story << endl;

        Fight_Menu fight(player);
        enemy* griffin = new enemy(150, 30, 50, 30, "Griffin");
        fight.initializeEnemy(griffin);
        player = fight.print(); //will be typed differently when Fight_Menu is complete
        cout << "\"Hey you! You've slain that despicable griffin. Here's something for your troble.\"" << endl << "The man gives you 500 Okra" << endl;
        delete griffin;
        int curr = player->getCurrency();
        player->setCurrency(curr + 500);
   }

};

class TrollFightScene : public Scene {
public:

    TrollFightScene(string d, string s, Character* c, int choice) : Scene(d, s ,c, choice) { }

    void print() {
        cout << descrip << endl;
        cout << story << endl;
        Fight_Menu fight(player);
        enemy* troll = new enemy(300, 45, 50, 30, "Cave Troll");
        fight.initializeEnemy(troll);
        player = fight.print();
        cout << "You exit the cave barely on your feet, dragging the chest out of that smelly old crack in the ground." << endl << "You open the chest to find 500 gold dabloons." << endl;
        delete troll;
        Item *i = new QuestItem(10000, "500 Gold Dabloons");
        player->addInventory(i);
    }
};

#endif
