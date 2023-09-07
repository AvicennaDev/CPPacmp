// 504-flower
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    char flower[] = "GCV", f{};
    int day{};

    input >> day;

    for (int i{}; i < day ; i++)
    {
        f = flower[2];
        flower[2] = flower[1];
        flower[1] = flower[0];
        flower[0] = f;

    }

    output << flower;

    return 0;
}
