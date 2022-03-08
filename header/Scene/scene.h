#ifndef SCENE_H
#define SCENE_H
#include <iostream>
#include "../Menu/Menu.hpp"

using namespace std;

class Scene {

 protected:
    string descrip;
    string introStory;
    int loc; // meant to determine index of obj in scenelist
    Menu* menu;

 public:
    Scene(string, string, Menu*);
    ~Scene();
    void setDescrip(string);
    void setIntroStory(string);
    void setLoc(int);
    int getLoc();
    Menu* getMenu();
    string getDescrip();
    string getIntroStory();
    virtual void outputDescrip() = 0;
    virtual void outputIntroStory() = 0;
};

#endif
