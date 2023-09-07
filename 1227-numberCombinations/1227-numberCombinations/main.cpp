//1227-numberCombinations
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// расчет факториала
long long outputFactorial (int digit)
{
    long long factorial{1};
    for ( int i{1}; i <= digit ; i++ )
    {
        factorial *= i;
    }
    return factorial;
}
// провести расчет формулы
long long colculationCombination(int number, int elements)
{
    // вычислить факториал number
    long long numberFac = outputFactorial(number);
    // вычислить факториал elements
    long long elementsFac = outputFactorial(elements);
    // вычислить формулу
    long long combination = numberFac/(elementsFac*outputFactorial(number-elements));
    return combination;
}

int main()
{

    // считать символы
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, elements{};
    input >> number >> elements;

    // провести расчет формулы
    long long combination{colculationCombination(number, elements)};

    // вывести результат функции
    output << combination;
    return 0;
}
