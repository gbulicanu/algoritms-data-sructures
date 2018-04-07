#include "reverse.h"
#include "gtest/gtest.h"

TEST(reverse, empty_array)
{
    int actual[1] = {};
    int expected[1] = {};
    reverse(actual, 0);
    EXPECT_EQ(expected, actual);
}