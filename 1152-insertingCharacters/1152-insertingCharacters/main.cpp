// 1152-insertingCharacters
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    char character{};

    input >> character;
    output << character;

    while (input >> character)
    {
        // если считать на символ раньше то #  будет предпоследней
        output << '#';
        output << character;
    }

    return 0;
}

