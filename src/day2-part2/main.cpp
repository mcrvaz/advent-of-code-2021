#include "../utils/file-utils.cpp"
#include "./solution.cpp"

int main(int argc, char *argv[])
{
    auto values = getStringValues("input.txt");
    std::cout << Day2Part2Solution{}.measureDistance(values);
}