#include "../../header/Scene/scene.h"
#include <iostream>

using namespace std;

Scene::Scene(string d, string s) {
    descrip = d;
    introStory =s;
    loc = 0;
}

Scene::~Scene() {
    //delete menu;
}

void Scene::setDescrip(string a) { descrip = a; }

void Scene::setIntroStory(string a) { introStory = a; }

void Scene::setLoc(int a) { loc = a; }

int Scene::getLoc() { return loc; }

string Scene::getDescrip() { return descrip; }

string Scene::getintroStory() { return introStory; }
