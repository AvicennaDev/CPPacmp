//1228-sumDigit
#include <iostream>
#include <fstream>

using namespace std;
// проверка на протое число
int isPrime (int number)
{
    // разделить число на числа от 1+1 до number1-1
    // если есть остаток от деления то
    // возврат 0
     for ( int i{0}; i < number;)
    {
         // исключение деления на 0
         //  исключение числа 1
        i++;
        if ((number%i) == 0 || (number < 2))
        {
            return 0;
        }
     }
     return number;
}
// проверка суммы на простоту и вывод
void outputAnswer (int sum)
{
    ofstream output ("output.txt");
    output << sum << endl;

    if (isPrime(sum) == 0)
    {
        output << "No";
    }
    else {
        output <<"Yes";
    }
}


int main()
{
    ifstream input ("input.txt");

    int number{}, sum{};
    for ( int i{}; i < 3; i++ )
    {
        input >> number;
        sum += isPrime(number);
    }
    outputAnswer (sum);
    return 0;
}
