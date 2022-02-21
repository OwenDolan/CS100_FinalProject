#ifndef SCENELIST_H
#define SCENELIST_H

#include <iostream>
#include "scene.h"

using namespace std;

class SceneList {

 private:
    Scene* head;
    Scene* tail;
    Scene* curr;

 public:
    SceneList();
    ~SceneList();
    void destroyRecursive(Scene*);
    void insert(Scene*, Scene*);
    Scene* getHead();
    Scene* getTail();
    Scene* getCurr();
    void progressStory();
};

#endif
