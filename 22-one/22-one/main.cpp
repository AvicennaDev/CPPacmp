//22- one
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, ones{};
    input >> number;

    while (number > 0)
    {
    ones += number%2;
    number = number/2;
    }
    output << ones;
    return 0;
}
