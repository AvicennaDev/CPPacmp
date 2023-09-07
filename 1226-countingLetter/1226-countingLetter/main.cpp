// 1226 countingLetter
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// считать символы
string readLetter ()
{
    ifstream input ("input.txt");
    string arrLetters{};
    getline(input, arrLetters);
    return arrLetters;
}
// подсчитать буквы
int countingLetter(char character)
{
    if (character >= 'A' && character <= 'Z')
    {
        return 1;
    }
    else if(character >= 'a' && character <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//вывод в фаил
void outputFile (int count)
{
    ofstream output ("output.txt");
    output << count;
}




int main()
{
    // считать символы
    string arrLetters{readLetter()};
    // подсчитать буквы
    int count{};
    for ( int i{}; i < 5; i++ )
    {
        count += countingLetter(arrLetters[i]);
    }
    // вывести количество букв в фаил
    outputFile(count);
    return 0;
}
