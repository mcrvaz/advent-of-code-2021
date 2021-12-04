#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

vector<int> getValues(string fileName)
{
    ifstream file(fileName);
    vector<int> values;
    string line;
    while (getline(file, line))
        values.push_back(stoi(line));
    file.close();
    return values;
}