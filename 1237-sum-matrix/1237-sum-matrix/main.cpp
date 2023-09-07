//1237-sum-matrix
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");
    int col{}, row{}, sumArr{};
    input >> col >> row;
    int arr1[101][101]{}, arr2 [101][101]{};
    // первый массив
    for ( int c{}; c < col;c++)
    {
        for ( int r{}; r < row; r++)
        {
            input >> arr1[c][r];
        }
    }
    // второй массив
    for ( int c{}; c < col;c++)
    {
        for ( int r{}; r < row; r++)
        {
            input >> arr2[c][r];
        }
    }
    // сумма матрица
    for ( int c{}; c < col;c++)
    {
        for ( int r{}; r < row; r++)
        {
            sumArr = arr1[c][r] + arr2[c][r];
            output << sumArr << " ";
        }
        output << endl;
    }

    return 0;
}
