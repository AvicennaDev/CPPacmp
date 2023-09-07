//1198-PasswordGenerator
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    //  функция, с помощью которой  числа будут более случайными
    // тк отсчет будет в секунлах от 1970 года.
    srand(time(NULL));
    ifstream input("input.txt");
    ofstream output("output.txt");
    int character{}, uppercase{}, lowercase{}, digit{};
    input >> character >> uppercase >> lowercase >> digit;

    // остальную длину заполнить цифами ( длина может быть больше, чем
    // сумма требуемого минимума символов
    digit = character - uppercase - lowercase;

    char* str = new char[character];

    // запись рандомных значений
    for (int i{}; i < character; i++)
    {
        //заполнение верхним регистром
        if (uppercase > 0)
        {
           // заполнение массива случайными символами загл букв
           str[i] = rand()%26+65;
           uppercase--;
           // если значения текущей ячейки совпадает
           // со значением предыдущей
          if (str[i] == str[i-1] && i > 0)
          {
            // будет возврат на i элемент массива
            // и его перезапись новым случайным числом
            i--;
            uppercase++;
          }
        }
        else if (lowercase > 0)
        {
           // заполнение массива случайными символами строч букв
           str[i] = rand()%26+97;
           lowercase--;
           // если значения текущей ячейки совпадает
           // со значением предыдущей
          if (str[i] == str[i-1] && i > 0)
          {
            // будет возврат на i элемент массива
            // и его перезапись новым случайным числом
            i--;
            lowercase++;
          }
        }
       else if (digit > 0)
        {
           // заполнение массива случайными символами строч букв
           str[i] = rand()%10+48;
           digit--;
           // если значения текущей ячейки совпадает
           // со значением предыдущей
          if (str[i] == str[i-1] && i > 0)
          {
            // будет возврат на i элемент массива
            // и его перезапись новым случайным числом
            i--;
            digit++;
          }
        }

      }

    for (int i = 0; i < character; i++)
    {
        output << str[i];
    }
    delete [] str;
    return 0;
}
