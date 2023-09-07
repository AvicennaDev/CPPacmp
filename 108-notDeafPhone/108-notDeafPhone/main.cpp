#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int number{};
    input >>  number;
    output << number;



    return 0;
}
