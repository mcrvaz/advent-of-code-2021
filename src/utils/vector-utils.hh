#ifndef VECTOR_UTILS_H
#define VECTOR_UTILS_H
#include <algorithm>
#include <iterator>
#include <span>
#include <bitset>
#include <numeric>
#include <ranges>

namespace VectorUtils
{
    using namespace std;

    int vectorToInt(vector<bool> bitVector);
    vector<bool> toBoolVector(string bitString);
};
#endif