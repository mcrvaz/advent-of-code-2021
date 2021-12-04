#include <algorithm>
#include <iterator>
#include <array>

template <std::size_t N>
int countIncreases(const std::array<int, N> &values)
{
    int previous = values.front();
    return std::count_if(
        values.begin(),
        values.end(),
        [&previous](int current)
        {
            bool result = current > previous;
            previous = current;
            return result;
        });
}