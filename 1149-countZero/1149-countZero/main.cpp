//1149-countZero
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    char number {'\0'};
    int zero{};

    while (input >> number)
    {
        if ( number == '0')
        {
            zero++;
        }
    }
    output << zero;

    return 0;
}
