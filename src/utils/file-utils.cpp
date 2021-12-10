#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <filesystem>
#include "./file-utils.hh"

using namespace std;

namespace FileUtils
{
    vector<int> getIntValues(string fileName)
    {
        auto path = filesystem::current_path() / fileName;
        if (!filesystem::exists(path))
            throw invalid_argument("Invalid file path " + path.string());
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
        auto path = filesystem::current_path() / fileName;
        if (!filesystem::exists(path))
            throw invalid_argument("Invalid file path " + path.string());
        ifstream file(fileName);
        vector<string> values;
        string line;
        while (getline(file, line))
            values.push_back(line);
        file.close();
        return values;
    }
};