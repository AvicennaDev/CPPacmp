#include <iostream>
# include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    unsigned short thickness{};
    int  coefficient{}, mattresses{};
    input >> coefficient >> thickness;
    mattresses = coefficient * coefficient * thickness;
    output << mattresses;
    return 0;
}
