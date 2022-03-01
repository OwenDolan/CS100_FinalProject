#include "scene.h"
#include <iostream>

using namespace std;

Scene::Scene(string d) {
    descrip = d;
    farLeft = nullptr;
    midLeft = nullptr;
    midRight = nullptr;
    farRight = nullptr;
}

Scene::~Scene() {
    delete farLeft;
    delete midLeft;
    delete midRight;
    delete farRight;
}

Scene* Scene::getFarLeft() { return farLeft; }

Scene* Scene::getMidLeft() { return midLeft; }

Scene* Scene::getMidRight() { return midRight; }

Scene* Scene::getFarRight() { return farRight; }

void Scene::setDescrip(string a) { descrip = a; }

void Scene::setIntroStory(string a) { introStory = a; }

void Scene::setFarLeft(Scene* a) { farLeft = a; }

void Scene::setMidLeft(Scene* a) { midLeft = a; }

void Scene::setMidRight(Scene* a) { midRight = a; }

void Scene::setFarRight(Scene* a) { farRight = a; }
