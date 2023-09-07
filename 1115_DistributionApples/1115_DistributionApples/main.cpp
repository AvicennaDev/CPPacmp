#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //1115_DistributionApples

    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int pupil{}, apple{};
    int balance{};

    input >> pupil >> apple;
    // вывод равного распределения яблок
    output << apple/pupil << " ";
    // вывод остатка яблок
    balance = apple - pupil*(apple/pupil);
    output << balance << " ";
    // вывод количества обделенных при раздаче остатка
    if (balance == 0)
    {
      output << 0;
    }
    else {
       output <<  pupil - balance;
    }
    return 0;
}
