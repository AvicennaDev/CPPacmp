#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream  output ("output.txt");
    int allNumber{}, minNumber{1000000}, point{};

    input >> allNumber;
   // int SerialNumber[allNumber];
   int* SerialNumber = new int [allNumber];

    for ( int i{}; i < allNumber; i++)
    {
        input >> SerialNumber [i];
        if (minNumber > SerialNumber[i])
        {
            minNumber = SerialNumber[i];
            // фиксируем индекс минимального элемента
            point = i;
        }
    }

    for ( int i{}; i <  allNumber; i++ )
    {
        // сначала выведутся элементы от мини.
        // потом из за % будет вывод первых элементов до встретившегося
        output << SerialNumber[(point + i) % allNumber] << " ";
    }

    return 0;
}






