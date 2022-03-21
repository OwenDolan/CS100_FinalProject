#ifndef __SCENE_TEST_HPP__
#define __SCENE_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/Scene/reworkscene.hpp"
//#include "../header/Menu/Fight_Menu.hpp"
TEST(SceneTest, TestDescrip) {
    Character* p = new Archer(0, 0 , 0 ,0);
    int index = 0;
    GuildScene* scene1 = new GuildScene("Hey", "You're a rockstar", p, index); 
    EXPECT_EQ(scene1->getDescrip(), "Hey");
    delete scene1;
}

TEST(SceneTest, TestStory) {
    Character* a = new Archer(0, 0 , 0 ,0);
    int index = 0;
    GuildScene* scene2 = new GuildScene("Never gonna give you up", "Never gonna let you down", a, index);
    EXPECT_EQ(scene2->getStory(), "Never gonna let you down");
    delete scene2;
}

TEST(SceneTest, TestPlayer) {
    Character* e = new Archer(0, 0 , 0 ,0);
    int index = 0;
    GuildScene* scene3 = new GuildScene("Steppin on the beat", "du rut du du", e,index);
    EXPECT_EQ(scene3->getPlayer(), e);
    delete scene3;
}

#endif


