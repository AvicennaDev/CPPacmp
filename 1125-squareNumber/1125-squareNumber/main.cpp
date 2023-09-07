#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int maxNumber{}, number{1};
    input >> maxNumber;
    // вроде бы не нужно
    // if ( maxNumber == 0) output << maxNumber ;
    while (maxNumber >= (number*number) )
    {
        output << number*number << " ";
        number++;
    }
    return 0;
}

