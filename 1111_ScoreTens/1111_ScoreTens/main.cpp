#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int digit{};

    input >> digit;
    digit %= 100;

    output << digit/10;
    return 0;
}
