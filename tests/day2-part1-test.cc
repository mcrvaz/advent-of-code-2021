#include <gtest/gtest.h>
#include "../src/day2-part1/solution.cpp"

TEST(Day2Part1, ExampleTest)
{
    EXPECT_EQ(
        Day2Part1Solution{}.solve(std::array<string, 6>{
            "forward 5",
            "down 5",
            "forward 8",
            "up 3",
            "down 8",
            "forward 2"}),
        150);
}
