// 44-arrow
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    string character{};
    // для сравнения строк, нужно объявить вторую строку той же
    // длины с 0, если будет один символ то и длина будет 1 символ.
    string subArray{"00000"};
    int arrowCount{};
    getline(input, character);
    for (int j{}; j <= (int)character.size()-5; j++) {

        for (int i{}; i < 5 ; i++)
        {
           subArray[i] = character[i+j];
        }
        if (subArray == ">>-->" || subArray == "<--<<" )
        {
            arrowCount++;
        }
   }
   output << arrowCount;
    return 0;
}
