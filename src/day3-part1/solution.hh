#ifndef DAY3PART1SOLUTION_H
#define DAY3PART1SOLUTION_H
#include <algorithm>
#include <iterator>
#include <span>
#include <bitset>
#include <numeric>
#include <iostream>

using namespace std;

class Day3Part1Solution
{
    bool getMostCommonBit(span<const string> values, int column);

public:
    int solve(span<const string> values);

    void solve();
};
#endif