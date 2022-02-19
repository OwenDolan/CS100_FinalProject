#ifndef SCENE_H
#define SCENE_H
#include <iostream>

using namespace std;

class Scene {

 private:
    Scene* farLeft;
    Scene* midLeft;
    Scene* midRight;
    Scene* farRight;
    string descrip;
    string introStory;

 public:
    Scene(string);
    ~Scene();
    Scene* getFarLeft();
    Scene* getMidLeft();
    Scene* getMidRight();
    Scene* getFarRight();
    string getDescrip();
    void setDescrip(string);
    void setFarLeft(Scene*);
    void setMidLeft(Scene*);
    void setMidRight(Scene*);
    void setFarRight(Scene*);
    virtual void outputDescrip() = 0;
    virtual void outputIntroStory() = 0;
};

#endif
