#include <gtest/gtest.h>
#include "../src/day2-part2/solution.cpp"

TEST(MeasureAim, ExampleTest)
{
    EXPECT_EQ(
        measureAim(std::array<string, 6>{
            "forward 5",
            "down 5",
            "forward 8",
            "up 3",
            "down 8",
            "forward 2"
        }),
        900
    );
}
