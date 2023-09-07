//283-RuneWord
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    string rune{};
    int lowercase{};

    getline(input, rune);
    // барьерный элемент для указания конца строки
    rune += 'A';

    //если первый символ не верхний регистр
    if ((rune[0] < 'A') || (rune[0] > 'Z'))
    {
        output << "No";
        return 0;
    }
    // начать со второго символа тк первый верхний регистр
    for (int i{1}; i < rune.size(); i++ )
    {
        // проверка на заглавную букву
        // при первой заглавной не зайдет в условие тк начало со второй буквы
        if (rune[i] >= 'A' && rune[i] <= 'Z')
        {
            // проверка количества строчных
            if  ((lowercase < 1) || (lowercase > 3))
            {
                output << "No";
                return 0;
            }
            lowercase = 0;
        }
        else
        {
            lowercase++;
        }
    }
    output << "Yes";
    return 0;
}
