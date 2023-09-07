// 1129-bankInterestRate
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int money{}, percentage{}, desired{}, year{};
    // как по анг истеченный скор времени?
    input >> money >> percentage >> desired;
    money *= 100;
    desired *= 100;

    while (desired > money)
    {
        money = money + money*percentage/100;
        year++;
    }

    output << year;

    return 0;
}
