#ifndef __SCENE_TEST_HPP__
#define __SCENE_TEST_HPP__

#include "gtest/gtest.h"

//#include "../header/Scene/scene.h"
#include "../header/Scene/eventscene.h"
#include "../header/Items/Item.h"

TEST(SceneTest, TestConstructor) {
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", i);
    EXPECT_EQ(scene->getLoc(), 0);
    EXPECT_EQ(scene->getDescrip(), "You are here");
    EXPECT_EQ(scene->getIntroStory(), "Welcome");
}

TEST(SceneTest, TestSetIntro) {
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", i);
    scene->setIntroStory("Welcome to the world of Vanguard, pick your character");
    EXPECT_EQ(scene->getIntroStory(), "Welcome to the world of Vanguard, pick your character");
}

TEST(SceneTest, TestSetDescrip) {
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", i);
    scene->setDescrip("You wake up in front of a useless water goddess who seems to drink too much");
    EXPECT_EQ(scene->getDescrip(), "You wake up in front of a useless water goddess who seems to drink too much");
}

TEST(SceneTest, TestSetLoc) {
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", i);
    scene->setLoc(69);
    EXPECT_EQ(scene->getLoc(), 69);
}

#endif
