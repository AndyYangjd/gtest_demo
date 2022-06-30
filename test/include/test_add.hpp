#ifndef GTEST_DEMO_TEST_HPP
#define GTEST_DEMO_TEST_HPP

#include <gtest/gtest.h>
#include "gtest_demo/add.hpp"

TEST(SuiteName, TestName1) {
    int expected = 3;
    int actual = gtest_demo::add(1, 2);
    ASSERT_EQ(expected, actual);
}

// set a error
TEST(SuiteName, TestName2) {
    int expected = 3;
    int actual = gtest_demo::add(1, 3);
    ASSERT_EQ(expected, actual);
}

#endif //GTEST_DEMO_TEST_HPP
