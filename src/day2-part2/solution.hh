#ifndef DAY2PART2SOLUTION_H
#define DAY2PART2SOLUTION_H
#include <algorithm>
#include <iterator>
#include <span>
#include <iostream>

using namespace std;

class Day2Part2Solution
{
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

public:
    int solve(span<const string> values);

    void solve();
};
#endif