#ifndef SCENE_H
#define SCENE_H
#include <iostream>
//#include "menu.h"

using namespace std;

class Scene {

 private:
    string descrip;
    string introStory;
    int loc; // meant to determine index of obj in scenelist
    // Menu* menu;

 public:
    Scene(string, string);
    ~Scene();
    string getDescrip();
    void setDescrip(string);
    void setIntroStory(string);
    void setLoc(int);
    virtual void outputDescrip() = 0;
    virtual void outputIntroStory() = 0;
};

#endif
