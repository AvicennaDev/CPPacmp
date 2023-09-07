// 1134-average
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    double average{},  sum{};
    int number{}, index{};
    do
    {
        input >> number;
        if ( number > 0)
        {
            sum += number;
            index++;
        }
    } while ( number != 0);
    average = sum / index;
    output << average;
    return 0;
}
