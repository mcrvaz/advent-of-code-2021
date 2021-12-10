#include <algorithm>
#include <iterator>
#include <span>
#include <iostream>
#include "./solution.hh"
#include "../utils/file-utils.hh"

using namespace std;

int Day1Part1Solution::solve(span<const int> values)
{
    int previous = values.front();
    return count_if(
        values.begin(),
        values.end(),
        [&previous](int current)
        {
            bool result = current > previous;
            previous = current;
            return result;
        });
}

void Day1Part1Solution::solve()
{
    auto values = FileUtils::getIntValues("day1-part1/input.txt");
    cout << solve(values);
}
