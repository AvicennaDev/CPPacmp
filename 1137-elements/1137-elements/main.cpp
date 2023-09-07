// 1137-elements
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number1{}, number2{}, count{};

    do
    {
        number1 = number2;
        input >> number2;
        if (number2 > number1 && number1 != 0)
        {
            count++;
        }

    } while (number2 != 0);
    output << count;

    return 0;
}
