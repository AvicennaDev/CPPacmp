//1141-equalElements
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number1{}, number2{}, index1{1}, index2{1};
    // index1 считает пары, поэтому нужно на 1 больше изначально
    input >> number1;
    do
    {
        number2 = number1;
        input >> number1;
        // если пара элементов равна, то увеличить index1 на единицу
        if ( number1 == number2)
        {
            index1++;
        }
        // если прошли одинаковые числа, то сравнить index двух  прошедших
        // последовательностей, но сравнивать набер не обязательно
        else if ( index2 < index1)
        {
            // пересохранить информацию о прошедшей последовательности
            // если там одинаковых чисел больше
            index2 = index1;
            // ???? почему не 1 для асмр
            index1 = 1;
        }
        // пока что то есть в чтении не =0
    } while (number1);
    // тк информация о больших последовательностях
    //хранится в index2 то вывести его
    output << index2;

    return 0;
}
