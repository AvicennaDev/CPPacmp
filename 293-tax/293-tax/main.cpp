#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int firm{}, number{1};
    input >> firm;
    // считываем доходы для фирм
    int* profits = new int [firm];
    for ( int i{};i < firm; i++ )
    {
        input >> profits[i];
    }
   // считываем  налоги для каждой фирмы
    int* taxes = new int [firm];
    for ( int i{}; i < firm; i++)
    {
        input >> taxes[i];
    }

    float percentage{0.0}, maxPercentage{0.0}; // для хранения процента
    for( int i{};i < firm ; i++ )
    {
      percentage = profits[i]*taxes[i]*0.01;
      // > учитывает вывод минимального номера фирмы
      if (percentage > maxPercentage )
      {
          maxPercentage = percentage;
          number = i+1;
      }
    }

   output << number;

    delete [] profits;
    delete [] taxes;
    return 0;
}
