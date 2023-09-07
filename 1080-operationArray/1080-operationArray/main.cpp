//1080-operationArray
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// функция для  rsq, rmq
int RsqRmq(string operation, int digit[], int from, int to )
{
    int result{};
    // выполнить суммирование
    if (operation == "rsq")
    {
        for (int i{from-1}; i < to; i++)
        {
            result += digit[i];
        }
    }
    //  найти минимум
    else {
        result = digit[from-1];
        for (int i{from-1}; i < to; i++)
        {
            if (digit[i] < result)
            {
                result = digit[i];
            }
        }
    }
    return result;

}

// функция для вычисления update, add
//int RsqRmq(char operation[], int digit[], int from, int to )

void addUpdate (string operation, int digit[], int from, int to, int number)
{
    //int result{};
    if  (operation == "add")
    {
        // увеличить значения от до на значение number
        for (int i{from-1}; i < to ; i++)
        {
            digit[i] += number;
        }
    }
    else {
        // присвоить элементам от до значение number
        for ( int i{from-1}; i < to; i++)
        {
            digit[i] = number;
        }
    }
}


int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int count{};
    // количество элементов в массиве
    input >> count;
    // массив для считывания элементов
   int digit[1000]{};
    // считать числа в массив
    for (int i{}; i < count; i++)
    {
        input >> digit[i];
    }

    // считать число операций
    int countOperation{};
    input >> countOperation;
    // считывание строк
    //фор
   while (countOperation > 0)
   {
       int from{}, to{}, result{};
       // массив для слова-операции
       string operation{};
       int i{};
       // считать символы слова
       input >> operation;
        if (operation[0] == 'g')
        {
            input >> result;
            output << (digit[result-1]) << endl;
        }
        else if (operation[0] == 'r')
        {
            input >> from >> to;
           result = RsqRmq(operation, digit, from, to);
            output << result << endl;
        }
        else
        {
            int number{};
            input >> from >> to >> number;
            addUpdate(operation, digit, from, to, number);
        }
        countOperation--;
   }
     return 0;
}
