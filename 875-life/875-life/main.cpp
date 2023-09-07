//875-life
#include <iostream>
#include <fstream>
#include "windows.h"

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");
    int row{}, col{}, generation{};
    // игра расположениа на торе
    input >> row >> col >> generation;
    char life[101][101]{}, subLife[101][101]{};

    // считать данные
    for ( int r{}; r < row; r++ )
    {
        for ( int c{}; c < col; c++ )
        {
            input >> life [r][c];
        }
    }

    // пока не закончится число покалений
    while (true)
    {
        // проверка соседей в строке 1
        for ( int r{}; r < row; r++ )
        {
            for ( int c{}; c < col; c++ )
            {
                subLife[r][c] = life[r][c];
                int neighbour{};
                //подмассив 3 на 3
                for ( int r2{r-1}; r2 < (r+2); r2++ )
                {
                    int subR{r2};
                    // если число на первой строке или на последней
                    if(r2 == -1)
                    {
                        subR = row-1;
                    }
                    if(r2 > (row-1))
                    {
                        subR = 0;
                    }
                    for ( int c2{c-1}; c2 < (c+2); c2++ )
                    {

                        int subC{c2};
                        if(c2 == -1)
                        {
                            subC = col-1;
                        }
                        if(c2 > (col-1))
                        {
                            subC = 0;
                        }
                        // проверка является текущий элемент самим элементом
                        // с которым все сравнивается
                        if((r == subR)&& (c == subC))
                        {
                            //пропустить итерацию и перейти в начало
                            continue;
                        }
                        //проверка элемента на присутствие  *
                        if (life [subR][subC] == '*')
                        {
                            neighbour++;
                        }
                    }
                }
                // уменьшить соседа на 1
                //  если соседей > 3 или < 1
                if ((neighbour > 3) || (neighbour < 2))
                {
                    subLife [r][c] = '.';
                }
                else if (neighbour == 3)
                {
                    subLife [r][c] = '*';
                }

            }
        }
        // перезаписать подмассив на место массива
        for ( int r{}; r < row; r++ )
        {
            for ( int c{}; c < col; c++ )
            {
                life[r][c] = subLife[r][c];
            }
        }
        system("cls");
        // вывести массив
        for ( int r{}; r < row; r++ )
        {
            for ( int c{}; c < col; c++ )
            {
                cout << life [r][c];
            }
            cout << endl;
        }
        Sleep(150);
    }


    return 0;
}
