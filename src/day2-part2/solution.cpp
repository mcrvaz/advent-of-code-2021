#include <algorithm>
#include <iterator>
#include <span>

using namespace std;

struct Distance
{
    int depth{};
    int horizontal{};
    int aim{};

    int totalDistance()
    {
        return depth * horizontal;
    }

    void parseCommand(const string command)
    {
        auto commandName = command.substr(0, command.find(" "));
        auto commandValue = stoi(command.substr(command.find(" ")));
        if (commandName == "forward")
        {
            horizontal += commandValue;
            depth += (aim * commandValue);
        }
        else if (commandName == "down")
            aim += commandValue;
        else if (commandName == "up")
            aim -= commandValue;
    }
};

int measureAim(span<const string> values)
{
    Distance distance{};
    for (auto command : values)
        distance.parseCommand(command);
    return distance.totalDistance();
}