#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");

    int element{};
    int size{}, maxN{};
    int numberPosition{}, start{}, end{};
    input >> size;
    // создание динамического массива
    // array это адрес на 1 ячейку массива, new  предполагает. что по
    // 1му адресу будет находится массив инт чисел
    // с длиной size
    int* array = new int[size];

    for(int i{} ;i < size ; i++ )
    {
        input >> element;
        array [i] = element;
    }

    input >> start >> end;

    start--; // уменьшение
    end--; // уменьшение

    for ( int j = start; j <= end; j++ )  // <=
    {
       if (j == start)
       {
           maxN = array[j];
           numberPosition = j;
       }
       else if (array[j] > maxN)
       {
           maxN = array[j];
           numberPosition = j;
       }
    }


    output << maxN << " " << numberPosition + 1;
    delete [] array;
    return 0;
}
