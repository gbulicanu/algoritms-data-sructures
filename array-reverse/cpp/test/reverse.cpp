#include "reverse.h"
#include <gtest/gtest.h>

TEST(reverse, empty_array)
{
    int expected = 0;
    int actual[1] = {};
    reverse(actual, 0);
    EXPECT_EQ(expected, actual[0]);
}

TEST(reverse, small_array)
{
    int input[5] = { 1, 2, 3, 4, 5 };
    int *actual = reverse(input, 5);

    EXPECT_EQ(5, actual[0]);
    EXPECT_EQ(4, actual[1]);
    EXPECT_EQ(3, actual[2]);
    EXPECT_EQ(2, actual[3]);
    EXPECT_EQ(1, actual[4]);
    delete[] actual;
    actual = nullptr;
}

TEST(reverse, big_array)
{
    int input[1000000];
    input[999999] = 1;
    int *actual = reverse(input, 1000000);

    EXPECT_EQ(1, actual[0]);
    delete[] actual;
    actual = nullptr;
}
