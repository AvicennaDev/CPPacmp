// 1404-simpleCipher
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    char character{};

    while (input >> character)
    {
        character++;
        // символ вышел за пределы диапазона [a-z]
        if (character == '{')
        {
            character = 'a';
        }

        output << character;
    }

    return 0;
}
