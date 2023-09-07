//1200-changeOrder
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    string str{};
    int day{};
    input >> day;
    // считатать пустоту после числа
    getline(input, str);
    // цикл для каждой строки
    for ( int i{}; i < day ; i++ )
    {
       // строка для фамилий, массив для фамилий, строка для склейки символов
       string line{}, surnames[101]{}, surname{};
       getline(input, line);
       int surnameIndex{};
       // собрать в элементы массива фамилии
       // считывать символы до конца строки
       for ( int j{}; j < line.size(); j++ )
       {
            if (line[j] != ' ')
            {
                // склеивание символов до пробела
               surname += line[j];
            }
            else
            {
                surnames[surnameIndex] = surname;
                surnameIndex++;
                surname = "";
            }
       }
       // при доходе до последнего слова, оно сохраняется в surname
       // но не в массив
       // увеличивать индекс не нужно тк нужно его потом уменьшать
       surnames[surnameIndex] = surname;
       // элементы массива начинаются от 0, и при уменьшении до 0
       for ( int j{surnameIndex}; j >= 0 ; j-- )
       {
            output << surnames[j] << " ";
       }
       output << endl;
    }
    return 0;
}
