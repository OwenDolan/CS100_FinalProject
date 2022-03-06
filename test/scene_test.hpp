#ifndef __SCENE_TEST_HPP__
#define __SCENE_TEST_HPP__

#include "../gtest/gtest.h"

#include "../header/Scene/scene.h"
#include "../header/Scene/eventscene.h"
#include "../header/Items/Item.h"

TEST(SceneTest, TestConstructor) {
    vector<Item*> i;
    Scene* scene = new EventScene("You are here", "Welcome", i);
    EXPECT_EQ(scene->getLoc(), 0);
    EXPECT_EQ(scene->getDescrip(), "You are here");
    EXPECT_EQ(scene->getIntroStory(), "Welcome");
}

#endif
