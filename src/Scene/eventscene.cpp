#include "../../header/Scene/eventscene.h"
#include <iostream>

using namespace std;

EventScene::EventScene(string d, string s, Menu* m, vector<Item*> i) : Scene(d, s, m) { itemList = i; }

EventScene::~EventScene() : ~Scene()  {
    for(int i = 0; i < itemList.size(); ++i) {
	delete itemList.at(i);
    }
}

void EventScene::outputDescrip() { cout << descrip << endl; }

void EventScene::outputIntroStory() { cout << introStory << endl; }
