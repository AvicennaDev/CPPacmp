// 1127-ExponentiationTwo
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int maxPower{}, twoPower{1};
    input >> maxPower;
    while (maxPower >= twoPower)
    {
      output << twoPower<< " ";
      twoPower = twoPower * 2;
    }
    return 0;
}
