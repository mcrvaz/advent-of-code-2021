#include "../utils/file-utils.cpp"
#include "./solution.cpp"

int main(int argc, char *argv[])
{
    auto values = getValues("input.txt");
    std::cout << countIncreases(values);
}