//1232-two-dimensional-array
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");
    int col{}, row{};
    input >> col >> row;
    int arr[101][101]{};
    //заполнение строк

    for (int c{}; c < col; c++)
    {
        int sumRow{};
        //заполнение столбцов
        for( int r{}; r < row; r++ )
        {
            //запись в текущие элемент считываемого значения
            input >> arr[c][r];
            sumRow += arr[c][r];
        }
        // вывести сумму строки и обнулить место храния этой суммы
        output << sumRow << " ";
        sumRow = 0;
    }
    output << endl;
    // сумма по столбцам
    for ( int r{}; r < row ; r++ )
    {
        int sumCol{};
        for ( int c{}; c < col; c++)
        {
           sumCol += arr[c][r];
        }
        output << sumCol << " ";
    }
    output << endl << endl;

    // вывод смого массива
    for ( int c{}; c < col; c++)
    {
        for (int r{}; r < row; r++)
        {
            output << arr[c][r] << " ";
        }
        output << endl;
    }


    return 0;
}
