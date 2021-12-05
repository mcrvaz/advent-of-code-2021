#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

vector<int> getIntValues(string fileName)
{
    ifstream file(fileName);
    vector<int> values;
    string line;
    while (getline(file, line))
        values.push_back(stoi(line));
    file.close();
    return values;
}

vector<string> getStringValues(string fileName)
{
    ifstream file(fileName);
    vector<string> values;
    string line;
    while (getline(file, line))
        values.push_back(line);
    file.close();
    return values;
}