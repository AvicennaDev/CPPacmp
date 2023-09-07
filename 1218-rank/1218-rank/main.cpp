#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int rank{}, tallPirtr{};
    input >> rank;

    int* tallPupil = new int [rank];
    for ( int i{}; i < rank; i++ )
    {
        input >> tallPupil[i];
    }
    input >> tallPirtr;
    int place = 1;
    // i < rank  конкретное условие
    // для условия "пока " использовать while
    // rank количество высот школьников
    for ( int i{}; i < rank  ;i++ )
    {
        // если рост Петра меньше или равен текущему росту
        if (tallPirtr <= tallPupil[i])
        {
            //  1 увеличит массив (место 1 вместо места 0)
            //  2 следующее место после текущего
            place = i+2;
        }
    }

    output << place;
    return 0;
}


/*
  for (int i{}; i < rank; i++)
    {
        if (tallPirtr > tallPupil[i])
        {
            break;
        }
        place = i + 2;
    }


  */

