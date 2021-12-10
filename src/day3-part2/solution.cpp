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

int Day3Part2Solution::getRating(const span<const string> input, bool flipRelevantBit)
{
    vector<string> values(input.size());
    values.assign(input.begin(), input.end());

    int lineCount = values.size();
    int columnCount = values[0].size();
    for (auto i = 0; i < columnCount; i++)
    {
        bool relevantBit = getMostCommonBit(values, i);
        if (flipRelevantBit)
            relevantBit = !relevantBit;

        for (auto j = 0; j < values.size(); j++)
        {
            if (literalCharToInt(values[j][i]) != (int)relevantBit)
            {
                values.erase(values.begin() + j);
                j--;
            }
            if (values.size() == 1)
                return VectorUtils::vectorToInt(VectorUtils::toBoolVector(values[0]));
        }
    }
    return VectorUtils::vectorToInt(VectorUtils::toBoolVector(values[0]));
}

int Day3Part2Solution::getOxygenRating(const span<const string> input)
{
    return getRating(input, false);
}

int Day3Part2Solution::getCO2ScrubberRating(const span<const string> input)
{
    return getRating(input, true);
}

int Day3Part2Solution::solve(const span<const string> values)
{
    auto oxygen = getOxygenRating(values);
    auto co2 = getCO2ScrubberRating(values);
    return oxygen * co2;
}

void Day3Part2Solution::solve()
{
    auto values = FileUtils::getStringValues("day3-part2/input.txt");
    cout << solve(values);
}
