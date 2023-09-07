// 46-numberE
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int countDigit{};
    char numberE [] {"7182818284590452353602875"};
    input >> countDigit;

    if(countDigit == 0)
    {
        output << '3';
        return 0;
    }
     output << "2.";
     for (size_t i{}; i < countDigit-1; i++ )
    {
        output << numberE[i];
    }

     if (numberE[countDigit] >= '5')
     {
         // привести к чару
         output << (char)(numberE[countDigit-1]+1);
     }
     else {
         output << numberE[countDigit-1];
     }

    return 0;
}
