//1233-transposition-1
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");
    int number{};
    int arr[101][101];

    input >> number;
    // считать матрицу
    for (int c{}; c < number; c++ )
    {
        for (int r{}; r < number; r++)
        {
            input >> arr[c][r];
        }
    }
    // вывод транспонированной матрицы по главной диагонали
    for(int r{}; r < number ; r++ )
    {
        for ( int c{}; c < number; c++ )
        {
            output << arr[c][r] << " ";
        }
        output << endl;
    }


    return 0;
}
