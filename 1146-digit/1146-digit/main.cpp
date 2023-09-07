// 1146-digit
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    char symbol{'\0'};

    input >> symbol;
    if ((symbol >= '0') && (symbol <= '9'))
    {
        output << "Yes";
    }
    else {
        output <<"No";
    }

    return 0;
}
