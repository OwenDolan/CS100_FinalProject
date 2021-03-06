//  main.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#include <iostream>
//#include "../header/Menu/Menu.hpp"
//#include "../header/Menu/Main_Menu.hpp"
//#include "../header/Menu/Fight_Menu.hpp"
#include "../header/Characters/Character.h"
#include "../header/Characters/Archer.h"
#include "../header/Characters/Warrior.h"
#include "../header/Characters/Mage.h"
#include "../header/Characters/Paladin.h"
#include "../header/Characters/Farmer.h"
#include "../header/Items/Healing.h"
#include "../header/Scene/reworkscene.hpp"

using namespace std;

Character*  player;

void choosePlayer(int choice) {
    if (choice == 1) {
        player = new Archer(100,10,1,10);
    }
    else if (choice == 2) {
        player = new Warrior(150, 10, 5, 15);
    }
    else if (choice == 3) {
        player = new Mage(100, 5, 1, 25);
    }
    else if (choice == 4) {
        player = new Paladin(200, 5, 20, 5);
    }
    else if (choice == 5) {
        player = new Farmer(1, 1, 1, 1);
    }
    else {
        cout << "invalid input received, restart game :) " << endl;
        exit(0);
    }

}

int main(int argc, const char * argv[]) {

    string barFightDescrip = "The sprite wishes you luck with your new shot at life and everything goes black.\n\nYou wake up as a human in the world of Unikal, one of medieval style and fantasy where goblins, orcs, dragons and other mythical creatures exist. With humans being a not so powerful race on their own, they have survived through the creation of adventuring guilds that work in protecting and assisting the towns they reside in.\n\nYou live in the town of Riverside and are a part of the adventuring guild known as the Vanguard.\n\nYou walk into the guildhall and to your left is the front desk and message board, and to your right is the bar/drinking area for adventurers on break.\n";
    string barFightIntro = "You are coming to find a quest to do for the day, but before you can walk to the message board, you are stopped by a drunk low level adventurer looking for a fight for no reason.\n\nHe calls your mother a wench, as a result you become furious and decide to put the drunkard to sleep.\n";
    string guildDescrip = "You end up in front of the message board, lined with missions and requests for help. Some to slay monsters and others to receive lost goods. You also see the Vanguard shop is open for buying equipment as well\n";
    string guildIntro = "After putting the drunkard into the ground, you decide to look at the message board for quests to go on for the day.\n\nYou find you can look at your current gear, go buy more before you set out, or pick up a quest and get going before dealing with any of the drunkard's friends. You ponder which to do.\n";
    string q1StartDescrip = "Your quest leads you to the location of a cave at the top of a mountain outlined by the paper you picked up on the bulletin board. Inside you find the bones of various animals and creatures strewn about. In the center of the cave, you find a large Griffin. A creature that is half eagle and half lion.\n\nYou see the creature is feasting on the remains of a farm animal and it turns to meet your gaze.\n";
    string q1StartIntro = "Your quest you accepted has asked you to slay the Griffin because it had been terrorizing farms at the outskirts of Riverside, and taking livestock from farmers, you prepare to fight Griffin staring you down with a maddening gaze.\n";
    string dungeonIntro = "\"Hey you're that guy who killed the griffin right?\"\t\"Well theres a dungeon at the edge of town with a big ol' pot of gold sittin around for the takin\"\t\"Whaddaya say you and me mosey on down there and get us some 50/50?\"\n";
    string dungeonDescrip = "You enter into the musty cavern with your companion and quite frankly smells like ass in here\nAs you round a corner, you can see the dungeon opens up much wider with a large wooden chest sitting in the middle of the room with a beam of light falling upon it\n\"Almost too good to be true, eh?\" says your friend. Yet the stench only grows stronger as you both approach.\nHe scurries ahead eager to pry open the chest; he reaches for it but is stopped dead in his tracks where a gigantic cave troll bashes him into pieces with one swipe of the club.";
     cout << "The world you are about to embark in is Vanguard, a fantasy RPG where you will be able to fight enemies, go on quests, earn money (Okra) and buy items to level up your character!\n" << endl;
    cout << "You wake up in a desolate place that seems like purgatory. You had previously passed on from your previous life after getting hit by a truck rather abruptly.\n\n A small spirit that totally looks like a rip-off from Legends of Zelda comes down from the sky. It projects a small screen in front of you.\n" << endl;

    Main_Menu begin;
    begin.print();
    int playerChoice = begin.chooseCharacter();
    choosePlayer(playerChoice);
    /*
    Item* i = new Healing(1);
    player->addInventory(i);
    Item *j = new QuestItem(10000, "500 Gold Dabloons");
        player->addInventory(j);
    */
    BarFightScene BarFight(barFightDescrip, barFightIntro, player, playerChoice);
    BarFight.print();

    GuildScene Guild(guildDescrip, guildIntro, BarFight.getPlayer(), playerChoice);
    Guild.print();

    QuestFightScene Quest(q1StartDescrip, q1StartIntro, Guild.getPlayer(), playerChoice);
    Quest.print();

    GuildScene Guild2(guildDescrip, "", BarFight.getPlayer(), playerChoice);
    Guild2.print();

    TrollFightScene Fight(dungeonIntro, dungeonDescrip, Guild.getPlayer(), playerChoice);
    Fight.print();

    GuildScene Guild1(guildDescrip, "", BarFight.getPlayer(), playerChoice);
    Guild1.print();

    //Fight_Menu fight(player);
    //fight.print();

    cout << "In a drunken stupor after celebrating your new found riches, you stagger outside to have a wee, but your poor footwork leads you to the edge of the precipice the Guild reigns upon, to which you prompty fall over and plummet to your death..." << endl << endl;
    cout << "Thank you for playing." << endl;
    

    return 0;
}
