CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(TextRPG)

ADD_EXECUTABLE(game
    src/main.cpp
    src/Menu/Main_Menu.cpp
    src/Menu/Fight_Menu.cpp
    src/Characters/Character.cpp
    src/Items/Item.cpp
    src/Items/Healing.cpp
)

ADD_EXECUTABLE(test
    test/unit_test.cpp
)
