#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");

    int countMark{}, Mark{}, minMark{}, maxMark{};

    input >> countMark;
    int* arr = new int [countMark];

    for( int i{}; i < countMark; i++)
    {
        input >> Mark;
        arr[i] = Mark;
        if(i == 0)
        {
            minMark = Mark;
            maxMark = Mark;
        }
        else if(minMark > Mark)
        {
            minMark = Mark;
        }
        if(maxMark < Mark)
        {
            maxMark = Mark;
        }
    }

    for ( int i{};  i < countMark;i++ )
    {
        if (arr[i] == maxMark)
        {
             arr[i] = minMark;
        }
        output << arr[i] << " ";
    }

    delete [] arr;
    return 0;
}
