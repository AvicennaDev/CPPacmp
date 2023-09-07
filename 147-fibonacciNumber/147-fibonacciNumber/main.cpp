//147-fibonacciNumber
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, f1{1}, f2{1}, f3{};
    input >> number;

    while (number > 0 )
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
        number--;

    }
    output << f3;
    return 0;
}
