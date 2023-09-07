// 1128-morningJob
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    double distance{}, allDistance{};
    int days{1};
    input >> distance >> allDistance;
    // исключение одинаковых дистанций в первом и втором числе
    while (distance <= allDistance && (allDistance - distance > 0.01))
    {
        distance = distance + distance*0.15;
        days++;
    }

    output << days;
    return 0;
}
