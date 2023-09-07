#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");

    // long long тип для данных 4*10^5
    // если не выводить 25 как часть числа
    // то можно int (достаточно 1600 000 000)
    int number{};
    input >> number;

    if(number == 5)
    {
        //cout << 5*5;
        output << 5*5;
        return 0;
    }
    // убрать 5 из числа
    number = number/10;
    // умножить 12 и 13(последовательные числа)
    number = number*(number+1);
    output << number << 25;
    //cout << number << 25;
  return 0;
}





