#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int Harry{}, Larry{}, sum{};
    ifstream input("input.txt");
    ofstream output("output.txt");

    input >> Harry >> Larry;
    sum = Harry+Larry-1;

    output << sum-Harry<< " "<< sum-Larry;
    return 0;
}
