#include "../utils/file-utils.cpp"
#include "./solution.cpp"

int main(int argc, char *argv[])
{
    auto values = getIntValues("input.txt");
    std::cout << Day1Part1Solution{}.countIncreases(values);
}