//
//  Main_Menu.cpp
//  FinalProject
//
//  Created by Owen Dolan on 2/22/22.
//

#include "Main_Menu.hpp"
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
        //go to next scene
    }
    else if (option == 'q') {
        exit();
    }
}
void Main_Menu::exit() { //needs to call destructor and confirms exit
    cout << "goodbye" << endl;
    ::exit(0);
}
