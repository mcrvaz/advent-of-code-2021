#include <gtest/gtest.h>
#include "../src/day2-part1/solution.cpp"

TEST(MeasureDistance, ExampleTest)
{
    EXPECT_EQ(
        measureDistance(std::array<string, 6>{
            "forward 5",
            "down 5",
            "forward 8",
            "up 3",
            "down 8",
            "forward 2"
        }),
        150
    );
}
