#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int mm{}, cmLui{},one{};
    input >> mm;

    cmLui = mm/10;

    if (mm%10 > 0)
    {
        cmLui++;
    }
    output << cmLui;
    return 0;
}
