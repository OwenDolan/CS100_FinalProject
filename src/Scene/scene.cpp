#include "../../header/Scene/scene.h"
#include <iostream>

using namespace std;

Scene::Scene(string d, string s, Menu* m) {
    descrip = d;
    introStory =s;
    loc = 0;
    menu = m;
}

Scene::~Scene() {
    delete menu;
}

void Scene::setDescrip(string a) { descrip = a; }

void Scene::setIntroStory(string a) { introStory = a; }

void Scene::setLoc(int a) { loc = a; }

int Scene::getLoc() { return loc; }

Menu* Scene::getMenu() ( return menu; }

string Scene::getDescrip() { return descrip; }

string Scene::getIntroStory() { return introStory; }
