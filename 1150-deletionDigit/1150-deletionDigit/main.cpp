//1150-deletionDigit
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    char character{};
    char str[101] {};
    int i{};
    while (input >> character)
    {
        if  (character != '4' && character != '7')
        {
        str[i] = character;
        i++;
        }
    }
     output << str;
    return 0;
}
