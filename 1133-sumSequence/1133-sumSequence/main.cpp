//1133-sumSequence
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, sum{};
    do
    {
       input >> number;
       // суммирует 0 или нет, не важно в асмр
       sum += number;

    } while (number != 0);
    output << sum;

    return 0;
}
