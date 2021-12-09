#ifndef FILE_UTILS_H
#define FILE_UTILS_H
#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

namespace FileUtils
{
    using namespace std;

    vector<int> getIntValues(string fileName);
    vector<string> getStringValues(string fileName);
};
#endif