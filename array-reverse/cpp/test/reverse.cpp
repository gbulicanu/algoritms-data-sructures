#include "reverse.h"
#include <gtest/gtest.h>

TEST(reverse, empty_array)
{
    int expected = 0;
    int actual[1] = {};
    reverse(actual, 0);
    EXPECT_EQ(expected, actual[0]);
}
