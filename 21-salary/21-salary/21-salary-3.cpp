#include <iostream>

using namespace std;

int main()
{
    // перебор
    int zarplati[5] = {23, 21, 4, 2, 4};
    int chisloZarplat = 5;
    int minimum = zarplati[0];
    int maximum = zarplati[0];
    for (int i = 1; i < chisloZarplat; i++)
    {
        int tekushayaZarplata = zarplati[i];
        if (minimum > tekushayaZarplata){
            minimum = tekushayaZarplata;
        }
        if (maximum < tekushayaZarplata){
            maximum = tekushayaZarplata;
        }
    }
    cout << "Max =" << maximum << "\nMin = " << minimum;
}
