#ifndef __CHARACTER_TEST_HPP__
#define __CHARACTER_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/Characters/Character.h"
#include "../header/Characters/Archer.h"
#include "../header/Characters/Farmer.h"
#include "../header/Characters/Mage.h"
#include "../header/Characters/Paladin.h"
#include "../header/Characters/Warrior.h"
#include "../header/Characters/enemy.h"

TEST(CharacterTest, TestConstructor) {
	Character*  player;
	player = new Warrior(10, 10, 10, 10);
	EXPECT_EQ(player->getAtk(), 10);
	EXPECT_EQ(player->getDefense(), 10);
	EXPECT_EQ(player->getHealth(), 10);
	EXPECT_EQ(player->getSpeed(), 10);
	
}

TEST(CharacterTest, TestSetterFunctionality) {
	Character* player;
	player = new Paladin(10, 10, 10, 10);
	player->setAtk(20);
	EXPECT_EQ(player->getAtk(), 20);
}

TEST(CharacterTest, TestSpecialSkill) {
	Character* player;
	player = new Archer(10, 10, 10, 10);
	EXPECT_EQ(player->specialSkill(), 5);
	EXPECT_EQ(player->getSkillName(), "Rain Of Arrows");
}

TEST(CharacterTest, TestBasicAtk) {
	Character* player;
	player = new Farmer(10, 10, 10, 10);
	EXPECT_EQ(player->basicAtk(), 5);
}


#endif
