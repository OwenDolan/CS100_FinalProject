#include "gtest/gtest.h"

#include "scene_test.hpp"
#include "character_test.hpp"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
