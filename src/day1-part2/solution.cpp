#include <algorithm>
#include <iterator>
#include <span>

using namespace std;

struct Group
{
    int size{};
    int sum{};
};

bool isGroupClosed(const Group g, const int groupSize)
{
    return g.size == groupSize;
}

int countGroupIncreases(span<const int> values, const int groupSize)
{
    int countIncreases{};
    Group currentGroup = {size : 1, sum : values.front()};
    Group nextGroup = {};
    for (auto i = 1; i < values.size(); i++)
    {
        auto currentValue = values[i];
        if (!isGroupClosed(currentGroup, groupSize))
            currentGroup = {size : currentGroup.size + 1, sum : currentGroup.sum + currentValue};

        if (!isGroupClosed(nextGroup, groupSize))
            nextGroup = {size : nextGroup.size + 1, sum : nextGroup.sum + currentValue};

        if (isGroupClosed(nextGroup, groupSize))
        {
            if (nextGroup.sum > currentGroup.sum)
                countIncreases++;
            currentGroup = nextGroup;
            nextGroup = {size: nextGroup.size - 1, sum: nextGroup.sum - values[i - 2]};
        }
    }
    return countIncreases;
}
