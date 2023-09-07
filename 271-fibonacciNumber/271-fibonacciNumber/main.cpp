//271-fibonacciNumber
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    unsigned  number{}, f1{1}, f2{1}, f3{}, counter{};
    input >> number;

    while (number > f3)
    {
       f1 = f2;
       f2 = f3;
       f3 = f1 + f2;
       counter++;
    }
    if (number == f3)
    {
        output << 1 << endl << counter;
    }
    else
    {
        output << 0;
    }
    return 0;
}
