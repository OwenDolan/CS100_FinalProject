#ifndef __SCENE_TEST_HPP__
#define __SCENE_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/Scene/eventscene.h"
#include "../header/Items/Item.h"
#include "../header.Menu/Main_Menu.hpp"

TEST(SceneTest, TestConstructor) {
    Menu* m = new Main_Menu();
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", m, i);
    EXPECT_EQ(scene->getLoc(), 0);
    EXPECT_EQ(scene->getDescrip(), "You are here");
    EXPECT_EQ(scene->getIntroStory(), "Welcome");
    EXPECT_EQ(scene->getMenu(), m);
}

TEST(SceneTest, TestSetIntro) {
    Menu* m = new Main_Menu();
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", m, i);
    scene->setIntroStory("Welcome to the world of Vanguard, pick your character");
    EXPECT_EQ(scene->getIntroStory(), "Welcome to the world of Vanguard, pick your character");
}

TEST(SceneTest, TestSetDescrip) {
    Menu* m = new Main_Menu();
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", m, i);
    scene->setDescrip("You wake up in front of a useless water goddess who seems to drink too much");
    EXPECT_EQ(scene->getDescrip(), "You wake up in front of a useless water goddess who seems to drink too much");
}

TEST(SceneTest, TestSetLoc) {
    Menu* m = new Main_Menu();
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", m, i);
    scene->setLoc(69);
    EXPECT_EQ(scene->getLoc(), 69);
}

#endif
