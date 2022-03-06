#ifndef __EVENTSCENE_H__
#define __EVENTSCENE_H__

#include <iostream>
#include <vector>
#include "scene.h"
#include "Item.h"

using namespace std;

class EventScene : public Scene {

private:
  vector<Item*> itemList;

public:
  EventScene(string, string, vector<Item*>);
  ~EventScene();
  void outputDescrip();
  void outputIntroStory();
};

#endif
