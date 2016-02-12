cmake_minimum_required(VERSION 3.0)

# App
add_executable(jp 
  src/main.cpp
  src/module.cpp
)
target_include_directories(jp
  PUBLIC include
  PRIVATE src
)

# Gtest
enable_testing()
find_package(GTest REQUIRED)
add_executable(jpTest 
  test/testMain.cpp
  src/module.cpp
)
target_include_directories(jpTest
  PUBLIC ${GTEST_INCLUDE_DIRS}
  PUBLIC include
  PRIVATE test
)
target_link_libraries(jpTest ${GTEST_BOTH_LIBRARIES})
add_test(jpTest jpTest)
