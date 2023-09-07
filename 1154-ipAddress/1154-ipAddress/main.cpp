//1154-ipAddress
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    string ipAddress;
    long long allDigit{};
    bool point = true;

    getline (input, ipAddress);
    ipAddress += '%';
    int sizeIP = ipAddress.size();
    //i не должен выходить за предел строки
    for (int i{}; i < sizeIP; i++)
    {
        // если встретили точку или конец строки
        if ((ipAddress[i] == '.') || (ipAddress[i] == '%'))
        {
            // тк было лишнее *10
            allDigit /= 10;
            //0.0.0.99999999999999  в int запишет число с "-"
            // point для встречи точки, без наличия числа
            if ((allDigit > 255) || point)
            {
                output << "Bad";
                return 0;
            }
            allDigit = 0;
            point = true;

        }
        // преобразование считываемоего символа в число
        else
        {
           // 0 получим при вычитании 48-48
           allDigit +=(ipAddress[i] - '0');
           allDigit *= 10;
           // информация что число есть, точки нет
           point = false;
        }
    }
    output << "Good";
    return 0;
}
