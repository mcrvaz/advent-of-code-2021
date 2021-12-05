#include <gtest/gtest.h>
#include "../src/day1-part1/solution.cpp"

TEST(CountIncreases, OneValueNoIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.countIncreases(std::array{1}), 0);
}

TEST(CountIncreases, MultipleValuesNoIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.countIncreases(std::array{1, 1}), 0);
}

TEST(CountIncreases, MultipleValueAlwaysIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.countIncreases(std::array{1, 2, 3}), 2);
}

TEST(CountIncreases, MultipleValueAlternatingIncreases)
{
    EXPECT_EQ(Day1Part1Solution{}.countIncreases(std::array{1, 2, 1, 2}), 2);
}

TEST(CountIncreases, ExampleTest)
{
    EXPECT_EQ(
        Day1Part1Solution{}.countIncreases(std::array{
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
