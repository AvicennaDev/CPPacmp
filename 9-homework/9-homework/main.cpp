#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    // ?? макс -100 было ошибкой, с -100 даже не запускался видимо
    int countNumber{}, sumPositive{}, maxPosition{0}, minPosition{0}, product{1};
    input >> countNumber;
    int* intNumber = new int [countNumber];
    for ( int i{}; i < countNumber; i++)

    {
        input >> intNumber[i];
        // если текущее значение больше значения в позиции maxPosition
        if( intNumber[i] > intNumber[maxPosition])
        {
            // сменить номер позиции макс числа
            maxPosition = i;
        }
        else if(intNumber[i] < intNumber[minPosition])
        {
            minPosition = i;
        }
        if (intNumber[i] > 0)
        {
          sumPositive +=intNumber[i];
        }
    }
    // записать произведение от мин до макс
    for (int i{minPosition+1}; i < maxPosition; i++)
    {
        product *=intNumber[i];
    }
    // записать произведение от макс до мин
    for (int i{maxPosition+1}; i < minPosition; i++)
    {
        product *=intNumber[i];
    }

    output << sumPositive << " " << product;
    delete [] intNumber;
    return 0;
}

/*
int startInd = (minPosition < maxPosition) ? minPosition : maxPosition;
int endInd = (minPosition < maxPosition) ? maxPosition : minPosition;


if (minPosition < maxPosition)
{
    startInd = minPosition;
    endInd = maxPosition;
}
else
{
    startInd = maxPosition;
    endInd = minPosition;
}
for (int i = startInd + 1 < i < endInd; i++)
{
       product *=intNumber[i];
}



 */
