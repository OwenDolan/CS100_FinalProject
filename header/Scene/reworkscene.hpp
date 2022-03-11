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

 void Scene::instantiatePlayer() {
     if (ch == 1) {
         dynamic_cast<Archer*>(player);
     }
     else if (ch == 2) {
        dynamic_cast<Warrior*>(player);

     }
     else if (ch == 3) {
        dynamic_cast<Mage*>(player);

     }
     else if (ch == 4) {
        dynamic_cast<Paladin*>(player);

     }
     else if (ch == 5) {
        dynamic_cast<Farmer*>(player);

     }
 }

class BarFightScene : public Scene {
public:

    BarFightScene(string d, string s, Character* c, int choice) : Scene(d, s ,c, choice) { }

    void print() {
        instantiatePlayer();
        cout << descrip << endl;
        cout << story << endl;

	Fight_Menu fight(player,ch);
	enemy* drunkard = new enemy(50, 2, 0, 0,"Drunkard");
    fight.initializeEnemy(drunkard);
	player = fight.print(); //will be typed differently when Fight_Menu is complete
    delete drunkard;
    }
};

class GuildScene : public Scene {

public:

    GuildScene(string d, string s, Character* c, int choice) : Scene(d, s, c, choice) { }

    void print() {
                instantiatePlayer();

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

    QuestFightScene(string d, string s, Character* c,int choice) : Scene(d, s ,c,choice) { }

    void print() {
                instantiatePlayer();

        cout << descrip << endl;
        cout << story << endl;

        Fight_Menu fight(player,ch);
        enemy* griffin = new enemy(150, 30, 50, 30, "Griffin");
        fight.initializeEnemy(griffin);
        player = fight.print(); //will be typed differently when Fight_Menu is complete
        delete griffin;
   }

};

#endif
