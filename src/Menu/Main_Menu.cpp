//
//  Main_Menu.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#include "../../header/Menu/Main_Menu.hpp"
#include <iostream>
using namespace std;

void Main_Menu::movingCommands() { //?
    
}
void Main_Menu::speedUpButton() { //speed up how fast text is displayed to screen
    
}


void Main_Menu::print() { //prints welcome message and menu options
    char option;
    cout << "Welcome to <insert game title here> " << endl;
    cout << "e - Enter game " << endl;
    cout << "q - exit game" << endl;
    cin >> option;
    while (cin.fail()) {
        cout << "invalid input, try again" << endl;
        cin.clear();
        cin.ignore();
        cin >> option;
    }
    if (option == 'e') {
        //go to next option
    }
    else if (option == 'q') {
        exit();
    }
}
void Main_Menu::exit() { //needs to call destructor and confirms exit
    cout << "goodbye" << endl;
    ::exit(0);
}

int Main_Menu::chooseCharacter() {
    int choice;
    cout << "Choose your character" << endl;
    cout << "1. Archer\n2. Warrior\n3. Mage\n4. Paladin\n5. Farmer" << endl;
    cout << ": " << flush;
    cin >> choice;
    while (cin.fail()) {
        cout << "invalid input, try again" << endl;
        cin.clear();
        cin.ignore();
        cin >> choice;
    }
    return choice;
}
