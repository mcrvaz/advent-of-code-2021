#include <algorithm>
#include <iterator>
#include <span>

using namespace std;

int countIncreases(span<const int> values)
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
