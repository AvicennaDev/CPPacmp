// 1139 equaMax
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, maxNumber{}, countMax{1};
    // макс = 1 тк единственное считанное число и будет макс
    // и у countMax не добор 1
    do
    {
        input >> number;
            // проверка на новый макс, если новый, то обнулисть макс
            if (number > maxNumber)
            {
                countMax = 1;
                maxNumber = number;
            }
            // если текущий макс равен прошлому
            else if ( number == maxNumber && number != 0)
            {
                countMax++;
            }

    } while ( number);
    output << countMax;
    return 0;
}
