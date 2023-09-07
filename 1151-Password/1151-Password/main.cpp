//1151-Password
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    char character{};
    bool digit = false, uppercase = false, capitals = false;
    int countCharacter{};


    while(input >> character)
    {
        // проверка на цифру
        if (character >= '0' && character <= '9')
        {
            digit = true;
        }
        // проверка на верхний регистр
        else if (character >= 'A' && character <= 'Z')
        {
            capitals = true;
        }
        // проверка на нижний регистр
        else if (character >= 'a' && character <= 'z')
        {
            uppercase = true;
        }
        countCharacter++;
    }

    if (digit && capitals && uppercase && (countCharacter >= 12))
    {
        output << "Yes";
    }
    else
    {
        output << "No";
    }
    return 0;
}
