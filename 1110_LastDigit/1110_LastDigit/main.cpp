#include <iostream>
#include <fstream>

using namespace std;

int main()
{
     ifstream input("input.txt");
     ofstream output("output.txt");
     int digit{};
     input >> digit;
     output << digit%10;
    return 0;
}
