#ifndef DAY3PART2SOLUTION_H
#define DAY3PART2SOLUTION_H
#include <algorithm>
#include <iterator>
#include <span>
#include <bitset>
#include <numeric>
#include <iostream>

using namespace std;

class Day3Part2Solution
{
    int literalCharToInt(char v);

    bool getMostCommonBit(const span<string> values, int column);

    int getOxygenRating(const span<const string> input);

    int getCO2ScrubberRating(const span<const string> input);

public:
    int solve(const span<const string> values);

    void solve();
};
#endif