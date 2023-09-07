#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");

    int lessons{};

    input >> lessons ;

    int min{}, hour{9};
    for (int i=1; i <= lessons; i++ )
    {
        min += 45;
        if ( min >= 60)
        {
            min -=60;
            hour++;
        }
        if (i == lessons)
        {
            break;
        }
        if ( i%2 == 0 )
        {
            min +=15;
        }
        else if( i%2 != 0)
        {
            min +=5;
        }


    }
    output << hour << " " << min;
    return 0;
}
