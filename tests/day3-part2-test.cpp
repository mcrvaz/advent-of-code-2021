#include <gtest/gtest.h>
#include "../src/day3-part2/solution.hh"

TEST(Day3Part2, ExampleTest)
{
    EXPECT_EQ(
        Day3Part2Solution{}.solve(std::array<string, 12>{
            "00100",
            "11110",
            "10110",
            "10111",
            "10101",
            "01111",
            "00111",
            "11100",
            "10000",
            "11001",
            "00010",
            "01010",
        }),
        230);
}
