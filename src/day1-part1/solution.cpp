#include <algorithm>
#include <iterator>
#include <span>

using namespace std;

class Day1Part1Solution
{
public:
    int solve(span<const int> values)
    {
        int previous = values.front();
        return count_if(
            values.begin(),
            values.end(),
            [&previous](int current)
            {
                bool result = current > previous;
                previous = current;
                return result;
            });
    }
};
