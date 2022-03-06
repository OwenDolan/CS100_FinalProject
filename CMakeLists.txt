CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

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
    tests/unit_test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
