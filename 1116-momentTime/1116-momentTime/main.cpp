#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int hour1{}, hour2{}, min1{}, min2{}, sec1{}, sec2{}, second{};

    input >> hour1 >> min1 >> sec1;
    input >> hour2 >> min2 >> sec2;

    second = (hour2-hour1)*3600 + (min2 - min1)*60 + (sec2 - sec1);

    output << second;
    return 0;
}
