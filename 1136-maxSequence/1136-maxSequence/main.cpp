// 1136-maxSequence
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, maxNumber{0};

    do
    {
        input >> number;
        if (number > maxNumber)
        {
            maxNumber = number;
        }
    }while ( number != 0);

    output << maxNumber;
    return 0;
}
