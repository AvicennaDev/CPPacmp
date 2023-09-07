// 1138-secondMax
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int number{}, max1{}, max2{};
    do
    {
        input >> number;
        // >= для теста 4
        if (number >= max1)
        {
            max2 = max1;
            max1 = number;
        }
        // для теста 8
        else if( number > max2)
        {
            max2 = number;
        }

    } while (number != 0);
    output << max2;
    return 0;
}
