//1132-sequenceLegth
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, index{};
    do
    {
        input >> number;
        if (number > 0)
        {
            index++;
        }

    } while ( number != 0);

    output << index;

    return 0;
}
