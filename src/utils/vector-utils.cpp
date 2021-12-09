#include <algorithm>
#include <iterator>
#include <span>
#include <bitset>
#include <numeric>
#include <ranges>
#include "./vector-utils.hh"

namespace VectorUtils
{
    using namespace std;

    int vectorToInt(vector<bool> bitVector)
    {
        return accumulate(
            bitVector.begin(),
            bitVector.end(),
            0,
            [](auto acc, auto bit)
            {
                return (acc << 1) | bit;
            });
    }

    vector<bool> toBoolVector(string bitString)
    {
        vector<bool> bits(bitString.size());
        for (char bit : bitString)
            bits.push_back(bit != '0');
        return bits;
    }
};