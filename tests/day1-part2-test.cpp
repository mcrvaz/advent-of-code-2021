#include <gtest/gtest.h>
#include "../src/day1-part2/solution.hh"

const int GROUP_SIZE = 3;

TEST(Day1Part2, ExampleTest)
{
    EXPECT_EQ(
        Day1Part2Solution{}.solve(std::array{
                                      199,
                                      200,
                                      208,
                                      210,
                                      200,
                                      207,
                                      240,
                                      269,
                                      260,
                                      263},
                                  GROUP_SIZE),
        5);
}
