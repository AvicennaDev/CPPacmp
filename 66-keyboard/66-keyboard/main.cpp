//66-keyboard
#include <iostream>
# include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    char str[] = {"qwertyuiopasdfghjklzxcvbnmq"};
    char character{};
    input >> character;

    for ( size_t i{}; i < strlen(str); i++ )
    {
        if (character == str[i])
        {
            output << str[i+1];
            break;
        }
    }

    return 0;
}
