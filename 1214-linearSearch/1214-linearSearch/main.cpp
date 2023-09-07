#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");
    int  size{}, position{}, number{}, count{};
    // создание динамического массива
    // array это адрес на 1 ячейку массива, new  предполагает. что по
    // 1му адресу будет находится массив инт чисел
    // с длиной size
    input >> size;
    int* arr = new int[size];
    for( int i{}; i < size; i++ )
    {
        input >> position;
        arr [i] = position;
    }
    input >> number;

    for( int i{}; i < size ; i++)
    {
       if (arr [i] == number)
       {
          count++;
       }
    }
   output << count;

    // очистка массива
    delete [] arr;
    return 0;
}
