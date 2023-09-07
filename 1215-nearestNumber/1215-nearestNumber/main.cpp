#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int countNumber{}, X{};
    input >> countNumber;

    int* A = new int [countNumber];
    // считывания файл в массив
    for ( int i{}; i < countNumber; i++ )
    {
        input >> A[i];
    }
    // число для проверки
    input >> X;

    int n{}, minDis{1100}, modul{}; // n для хранения текущего значения
    for(int i{}; i < countNumber; i++ )
    {
        // расчет модуля числа
        modul = abs (A[i] - X);
        // если элемент имеет больший индекс или больший модуль заменить их
        if (modul < minDis || ( modul == minDis && A[i] < A[n] ))
        {
            minDis = modul;
            n = i;
        }
    }
    // вывод жлемента с наименьшим индексом и модулем
    output << A[n];
    delete [] A;
    return 0;

}

