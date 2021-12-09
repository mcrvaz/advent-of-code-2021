#include <algorithm>
#include <iterator>
#include <span>
#include <iostream>
#include "./solution.hh"
#include "../utils/file-utils.hh"

using namespace std;

int Day2Part1Solution::solve(span<const string> values)
{
    Distance distance{};
    for (auto command : values)
        distance.parseCommand(command);
    return distance.totalDistance();
}

void Day2Part1Solution::solve()
{
    auto values = FileUtils::getStringValues("input.txt");
    cout << solve(values);
}