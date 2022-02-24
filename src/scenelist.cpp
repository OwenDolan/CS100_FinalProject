#include "../header/scenelist.h"
#include <iostream>

using namespace std;

SceneList::SceneList() {
    head = nullptr;
    tail = nullptr;
    curr = nullptr;
}

SceneList::~SceneList() {
    destroyRecursive(head);
}

void SceneList::destroyRecursive(Scene* ptr) {
    if (ptr) {
        destroyRecursive(ptr->getFarLeft());
        destroyRecursive(ptr->getMidLeft());
        destroyRecursive(ptr->getMidRight());
        destroyRecursive(ptr->getFarRight());
        delete ptr;
    }
}

void SceneList::insert(Scene* loc, Scene* node) {
    if(loc->getFarLeft() == nullptr) {
        loc->setFarLeft(node);
    }
    else if(loc->getMidLeft() == nullptr) {
        loc->setMidLeft(node);
    }
    else if (loc->getMidRight() == nullptr) {
        loc->setMidRight(node);
    }
    else if (loc->getFarRight() == nullptr) {
        loc->setFarRight(node);
    }
    else {
        cout << "Unable to insert node" << endl;
    }
}

Scene* SceneList::getHead() { return head; }

Scene* SceneList::getTail() { return tail; }

Scene* SceneList::getCurr() { return curr; }

void SceneList::progressStory() {
    //Need to implement with menus
}
