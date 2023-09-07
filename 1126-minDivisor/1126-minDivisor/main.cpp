#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int divident, number{2};
    input >> divident;

    while ( divident%number != 0)
    {
        number++;
    }
    output << number;

    return 0;
}
