#include "../header/scenelist.h"
#include <iostream>

using namespace std;

SceneList::SceneList() { }

SceneList::~SceneList() {
    for (int i = 0; i < list.size(); ++i) {
        delete list.at(i);
    }
}

void SceneList::insert(Scene* loc, Scene* node) {
    list.push_back(ptr);
    ptr->setLoc(list.size()-1);
}

void SceneList::progressStory() {
    //Need to implement with menus
}
