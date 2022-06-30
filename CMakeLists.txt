cmake_minimum_required(VERSION 3.22)
project(gtest_demo)

set(CMAKE_CXX_STANDARD 20)
# print all message
add_compile_options(-Wall)

include_directories(include)

add_subdirectory(src)

add_executable(gtest_demo main.cpp)
target_link_libraries(gtest_demo gtest_add)

option(BUILD_TEST "Whether or not to build the test." ON)

if (BUILD_TEST)
    message(STATUS "Building Tests.")
    # enable_testing()

    add_executable(add_test test/src/test_add.cpp)
    target_include_directories(add_test PRIVATE "test/include" "include")
    target_link_libraries(add_test
            gtest_add
            gtest
            pthread)
endif ()
