#include <algorithm>
#include <iterator>
#include <span>
#include <iostream>
#include "./solution.hh"
#include "../utils/file-utils.hh"

using namespace std;

int Day2Part2Solution::solve(span<const string> values)
{
    Distance distance{};
    for (auto command : values)
        distance.parseCommand(command);
    return distance.totalDistance();
}

void Day2Part2Solution::solve()
{
    auto values = FileUtils::getStringValues("input.txt");
    std::cout << solve(values);
}
