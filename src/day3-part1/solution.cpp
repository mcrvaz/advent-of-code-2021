#include <algorithm>
#include <iterator>
#include <span>
#include <bitset>
#include <numeric>
#include <iostream>
#include "./solution.hh"
#include "../utils/vector-utils.hh"
#include "../utils/file-utils.hh"

using namespace std;

bool Day3Part1Solution::getMostCommonBit(span<const string> values, int column)
{
    string::size_type zeroCount{};
    for (auto i = 0; i < values.size(); i++)
    {
        if (values[i][column] == '0')
            zeroCount++;
    }
    string::size_type oneCount{values.size() - zeroCount};
    return oneCount >= zeroCount;
}

int Day3Part1Solution::solve(span<const string> values)
{
    string::size_type columnCount{values.front().size()};
    vector<bool> mostCommonBits(columnCount);
    for (auto i = 0; i < columnCount; i++)
        mostCommonBits[i] = getMostCommonBit(values, i);

    vector<bool> leastCommonBits(mostCommonBits);
    leastCommonBits.flip();

    int gammaRate = VectorUtils::vectorToInt(mostCommonBits);
    int epsilonRate = VectorUtils::vectorToInt(leastCommonBits);
    return gammaRate * epsilonRate;
}

void Day3Part1Solution::solve()
{
    auto values = FileUtils::getStringValues("input.txt");
    cout << solve(values);
}
