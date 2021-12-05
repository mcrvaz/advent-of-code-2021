#include <algorithm>
#include <iterator>
#include <span>

using namespace std;

struct Distance
{
    int depth{};
    int horizontal{};

    int totalDistance()
    {
        return depth * horizontal;
    }

    void parseCommand(const string command)
    {
        auto commandName = command.substr(0, command.find(" "));
        auto commandValue = stoi(command.substr(command.find(" ")));
        if (commandName == "forward")
            horizontal += commandValue;
        else if (commandName == "down")
            depth += commandValue;
        else if (commandName == "up")
            depth -= commandValue;
    }
};

int measureDistance(span<const string> values)
{
    Distance distance{};
    for (auto command : values)
        distance.parseCommand(command);
    return distance.totalDistance();
}