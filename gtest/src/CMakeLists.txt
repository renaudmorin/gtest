project(lab5)
cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

option(BUILD_TESTING "build unit tests" ON)

if(BUILD_TESTING)
  include(ExternalProject)

  ExternalProject_add(gtest-target
          GIT_REPOSITORY "https://github.com/google/googletest"
          CMAKE_ARGS "-DCMAKE_INSTALL_PREFIX=${CMAKE_CURRENT_BINARY_DIR}/extern"
          UPDATE_COMMAND ""
          )

  include_directories(${CMAKE_CURRENT_BINARY_DIR}/extern/include)
  link_directories(${CMAKE_CURRENT_BINARY_DIR}/extern/lib)
  set(GTEST_LIBRARIES gtest gmock gtest_main gmock_main pthread)

  enable_testing()

  add_subdirectory(test)
endif()
