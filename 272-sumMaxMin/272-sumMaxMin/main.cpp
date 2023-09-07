// 272-sumMaxMin
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, index{}, maxNumber{-10001}, minNumber{10001};

    while (input >> number)
    {
        index++;
        if (index%2 != 0 && number <  minNumber)
        {
            minNumber = number;
        }
        if (index%2 == 0 && number > maxNumber)
        {
           maxNumber = number;
        }
    }
    output << maxNumber+minNumber;
    return 0;
}
