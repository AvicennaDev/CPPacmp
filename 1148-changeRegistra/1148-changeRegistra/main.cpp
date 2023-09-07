#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");
    char symbol{'\0'};
    input >> symbol;
    if (symbol >= 'A' && symbol <= 'Z')
    {
        symbol += 32;
    }
    else if (symbol >= 'a' && symbol <= 'z')
    {
        symbol -=32;
    }
    output << symbol;
    return 0;
}
