#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int digit{}, sum{};
    input >> digit;

    sum += digit%10;
    digit /= 10;
    sum += digit%10;
    digit /= 10;
    sum += digit;

    output << sum;
    return 0;
}
