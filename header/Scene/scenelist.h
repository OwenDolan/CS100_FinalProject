#ifndef SCENELIST_H
#define SCENELIST_H

#include <iostream>
#include "scene.h"
#include <vector>

using namespace std;

class SceneList {

 private:
    vector<Scene*> list;

 public:
    SceneList();
    ~SceneList();
    void insert(Scene*, Scene*);
    void progressStory();
};

#endif
