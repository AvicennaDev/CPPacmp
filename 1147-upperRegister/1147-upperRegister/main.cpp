// 1147 upperRegister
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    char letter {'\0'};
    input >> letter;
    if (letter >= 'a' && letter <= 'z' )
    {
      letter -= 32;
    }
    output << letter;
    return 0;
}
