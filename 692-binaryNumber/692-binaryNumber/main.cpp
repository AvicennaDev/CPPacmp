// 692-binaryNumber
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int maxPower{}, twoPower{1};
    input >> maxPower;

    while(maxPower > twoPower)
    {
        twoPower = twoPower * 2;
    }
    if (maxPower == twoPower)
    {
        output << "YES";
    }
    else {
        output << "NO";
    }
    return 0;
}
