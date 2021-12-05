#include <algorithm>
#include <iterator>
#include <span>
#include <bitset>
#include <numeric>

using namespace std;

class Day3Part1Solution
{
    bool getMostCommonBit(span<const string> values, int column)
    {
        string::size_type zeroCount{};
        for (auto i = 0; i < values.size(); i++)
        {
            if (values[i][column] == '0')
                zeroCount++;
        }
        string::size_type oneCount{values.size() - zeroCount};
        return oneCount > zeroCount;
    }

    int vectorToInt(vector<bool> bitVector)
    {
        return std::accumulate(
            bitVector.begin(),
            bitVector.end(),
            0,
            [](auto acc, auto bit)
            {
                return (acc << 1) | bit;
            });
    }

public:
    int solve(span<const string> values)
    {
        string::size_type columnCount{values.front().size()};
        vector<bool> mostCommonBits(columnCount);
        for (auto i = 0; i < columnCount; i++)
            mostCommonBits[i] = getMostCommonBit(values, i);

        int gammaRate = vectorToInt(mostCommonBits);
        mostCommonBits.flip();
        int epsilonRate = vectorToInt(mostCommonBits);
        return gammaRate * epsilonRate;
    }
};
