#include <gtest/gtest.h>
#include "../src/day1-part2/solution.cpp"

const int GROUP_SIZE = 3;

TEST(GroupedCountIncreases, ExampleTest)
{
    EXPECT_EQ(
        countGroupIncreases(std::array{
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
