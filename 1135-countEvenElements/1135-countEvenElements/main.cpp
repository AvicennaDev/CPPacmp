// 1135-countEvenElements
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, countEven{};

    do
    {
        input >> number;
        if (number%2 == 0 && number > 0)
        {
          countEven++;
        }
    }while (number != 0);

    output << countEven;
    return 0;
}
