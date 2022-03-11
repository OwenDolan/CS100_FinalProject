CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

project(TextRPG)

ADD_EXECUTABLE(game
    src/main.cpp
    src/Menu/Main_Menu.cpp
    src/Menu/Fight_Menu.cpp
    src/Characters/Character.cpp
    src/Characters/enemy.cpp
    src/Characters/Farmer.cpp
    src/Characters/Paladin.cpp
    src/Characters/Warrior.cpp
    src/Characters/Mage.cpp
    src/Characters/Archer.cpp
    src/Items/Item.cpp
    src/Menu/Shop_Menu.cpp
    src/Items/Armor.cpp
    src/Items/Healing.cpp
    src/Items/Weapon.cpp
)

ADD_EXECUTABLE(test
    tests/unit_test.cpp
    src/Menu/Main_Menu.cpp
    src/Scene/scene.cpp
    src/Scene/eventscene.cpp
    src/Characters/Character.cpp
    src/Characters/enemy.cpp
    src/Characters/Farmer.cpp
    src/Characters/Paladin.cpp
    src/Characters/Warrior.cpp
    src/Characters/Mage.cpp
    src/Characters/Archer.cpp
    src/Menu/Shop_Menu.cpp
    src/Items/Item.cpp
    src/Items/Healing.cpp
    src/Items/Armor.cpp
    src/Items/Weapon.cpp
)

ADD_EXECUTABLE(shop
    src/Menu/Shop_Menu_test.cpp
    src/Menu/Menu.cpp
    src/Menu/Shop_Menu.cpp
    src/Characters/Character.cpp
    src/Characters/Farmer.cpp
    src/Items/Item.cpp
    src/Items/Healing.cpp
    src/Items/Armor.cpp
    src/Items/Weapon.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
