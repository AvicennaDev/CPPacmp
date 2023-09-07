//1225-numberDigit
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// IsDigit(C), которая возвращает 1, если символ C – цифра, и 0 – иначе.
int isDigit(char arr);
// чтение с файла
string readChar();
// вывод в фаил
void outputFile(int count);


int main()
{
    string arr{};
    char character{};
    int count{};
    arr = readChar();

    for (int i{}; i < 5; i++)
    {
      count += isDigit(arr[i]);
    }
    outputFile(count);
    return 0;
}

string readChar ()
{
    string arr{};
    ifstream input ("input.txt");
    getline(input, arr);

    return arr;
}

int isDigit(char arr)
{
    if (arr > 47 && arr < 58)
    {
        return 1;
    }
    else {
        return 0;
    }
}

void outputFile(int count)
{
    ofstream output ("output.txt");
    output <<  count;
}
