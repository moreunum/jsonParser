#include "gtest/gtest.h"
#include "module.h"

TEST(TestModule, TestReturnTrue){
  ASSERT_TRUE(returnTrue());
}

int main(int argc, char** argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
