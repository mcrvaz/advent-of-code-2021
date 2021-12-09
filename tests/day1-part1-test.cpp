#include <gtest/gtest.h>
#include "../src/day1-part1/solution.hh"

TEST(Day1Part1, OneValueNoIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.solve(std::array{1}), 0);
}

TEST(Day1Part1, MultipleValuesNoIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.solve(std::array{1, 1}), 0);
}

TEST(Day1Part1, MultipleValueAlwaysIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.solve(std::array{1, 2, 3}), 2);
}

TEST(Day1Part1, MultipleValueAlternatingIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.solve(std::array{1, 2, 1, 2}), 2);
}

TEST(Day1Part1, ExampleTest)
{
    EXPECT_EQ(
        Day1Part1Solution{}.solve(std::array{
            199,
            200,
            208,
            210,
            200,
            207,
            240,
            269,
            260,
            263}),
        7);
}
