#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int days{}, even{}, odd{}, day{};
    input >> days;

    int* oddDay= new int [days];
    int* evenDay = new int [days];

    for( int i{}; i < days; i++ )
    {
         input >> day;
         if (day%2 != 0)
         {
             // длина массива будет равна количеству неч.элементов
             oddDay[odd]=day;
             // вывод строчки нечетных дней
             output << oddDay[odd] << " ";
             odd++;
         }
         else {
             evenDay[even] = day;
             even++;
         }
    }
    output << endl;
    // вывод четных дней
    for ( int i{}; i < even;i++ )
    {
        output << evenDay[i] << " ";
    }
    output << endl;
    // плохо указано условие, 4 нужно вывести если 3 и 4 одинаково
    (even >= odd) ? (output << "YES") : (output << "NO");
    delete [] oddDay;
    delete [] evenDay;
    return 0;
}
