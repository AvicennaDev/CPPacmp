//297-smallCircle
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    char number{};
    int countCircle{};

    while (input >> number)
    {
        if (number == '0' || number == '6' || number == '9')
        {
            countCircle++;
        }
        else if (number == '8')
        {
            countCircle += 2;
        }
    }

    output << countCircle;
    return 0;
}
