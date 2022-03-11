#ifndef REWORKSCENE_HPP
#define REWORKSCENE_HPP

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

public:
    Scene(string d, string s, Character* c) {
        descrip = d;
	story = s;
	player = c;
    }

    virtual void print() = 0;

    Character* getPlayer() { return player; }

    string getDescrip() { return descrip; }

    string getStory() { return story; }

};

class BarFightScene : public Scene {
public:

    BarFightScene(string d, string s, Character* c) : Scene(d, s ,c) { }

    void print() {
        cout << descrip << endl;
        cout << story << endl;

	Fight_Menu fight(player);
	enemy drunkard(50, 2, 0, 0);
	player = fight.print(); //will be typed differently when Fight_Menu is complete
    }
};

class GuildScene : public Scene {

public:

    GuildScene(string d, string s, Character* c) : Scene(d, s, c) { }

    void print() {
	cout << descrip << endl;
        cout << story << endl;

	char decision = 'a';
	ShopMenu Shop(player);
	//Item_Menu Inv(player);

	while (decision != '3') {
	    cout << "What would you like to do?" << endl;
	    cout << "1 - Look at Inventory\n2 - Go to the shop\n3 - Take up a quest\n" << endl;
	    cin >> decision;

	    if (decision == '1') {
		//Inv.print();
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

    QuestFightScene(string d, string s, Character* c) : Scene(d, s ,c) { }

    void print() {
        cout << descrip << endl;
        cout << story << endl;

        Fight_Menu fight(player);
        enemy griffin(150, 30, 50, 30);
        player = fight.print(); //will be typed differently when Fight_Menu is complete
   }
};

#endif
