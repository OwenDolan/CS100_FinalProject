#include "../../header/Scene/eventscene.h"
#include <iostream>

using namespace std;

EventScene::EventScene(string d, string s, vector<Item*> i) : Scene(d, s) { itemList = i; }

EventScene::~EventScene() { }

void EventScene::outputDescrip() { cout << descrip << endl; }

void EventScene::outputIntroStory() { cout << introStory << endl; }
