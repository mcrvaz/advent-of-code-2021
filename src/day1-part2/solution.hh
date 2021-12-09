#ifndef DAY1PART2SOLUTION_H
#define DAY1PART2SOLUTION_H
#include <algorithm>
#include <iterator>
#include <span>
#include <iostream>

using namespace std;

class Day1Part2Solution
{
    struct Group
    {
        int size{};
        int sum{};
    };

    bool isGroupClosed(const Group g, const int groupSize);

public:
    int solve(span<const int> values, const int groupSize);

    void solve();
};
#endif