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

int Day3Part2Solution::literalCharToInt(char v)
{
    return v - '0';
}

bool Day3Part2Solution::getMostCommonBit(const span<string> values, int column)
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

int Day3Part2Solution::getOxygenRating(const span<const string> input)
{
    vector<string> values(input.size());
    values.assign(input.begin(), input.end());

    int columnCount = values[0].size();
    for (auto i = 0; i < columnCount; i++)
    {
        bool relevantBit = getMostCommonBit(values, i);
        for (auto j = 0; j < columnCount; j++)
        {
            if (literalCharToInt(values[j][i]) != (int)relevantBit)
                values.erase(values.begin() + j);
        }
    }
    return VectorUtils::vectorToInt(VectorUtils::toBoolVector(values[0]));
}

int Day3Part2Solution::getCO2ScrubberRating(const span<const string> input)
{
    vector<string> values(input.size());
    values.assign(input.begin(), input.end());

    int columnCount = values[0].size();
    for (auto i = 0; i < columnCount; i++)
    {
        bool relevantBit = !getMostCommonBit(values, i);
        for (auto j = 0; j < columnCount; j++)
        {
            if (literalCharToInt(values[j][i]) != (int)relevantBit)
                values.erase(values.begin() + j);
        }
    }
    return VectorUtils::vectorToInt(VectorUtils::toBoolVector(values[0]));
}

int Day3Part2Solution::solve(const span<const string> values)
{
    return getOxygenRating(values) * getCO2ScrubberRating(values);
}

void Day3Part2Solution::solve()
{
    auto values = FileUtils::getStringValues("input.txt");
    cout << solve(values);
}
