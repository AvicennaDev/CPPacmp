//163-equation
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    string equation{};
    int digit{};

    getline(input, equation);

    // не известный стоит в начале
        if (equation[0] == 'x')
        {
            // была сумма
            if (equation[1] == '+')
            {
                digit = (equation[4] - '0') - (equation[2] - '0');
            }
            // была разница
            else
            {
               digit = (equation[4] - '0') + (equation[2] - '0');
            }
        }
        // если х на второй цифре
        else if (equation[2] == 'x') {
            // была сумма
            if (equation[1] == '+')
            {
                digit = (equation[4] - '0') - (equation[0] - '0');
            }
            // была разница
            else
            {
               digit = (equation[0] - '0') - (equation[4] - '0');
            }
        }
        //если х после равно
        else {
            if (equation[1] == '+')
            {
                digit = (equation[0] - '0') + (equation[2] - '0');
            }
            // была разница
            else
            {
               digit = (equation[0] - '0') - (equation[2] - '0');
            }
        }
        output << digit;


    return 0;
}
