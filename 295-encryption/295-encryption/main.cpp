//295-encryption
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    string word{}, encryption{}, memory{};
    bool wordB = true;

    getline(input, encryption);
    memory = encryption;
    getline(input, word);

    while (wordB)
    {
        string subArray{};
        for ( int i{}; i <= (int)encryption.size()-(int)word.size(); i++ )
        {
            for ( int j{}; j < (int)word.size(); j++ )
            {
               subArray +=encryption[i+j];
            }
            if (subArray == word)
            {
                output << encryption;
                return 0;
            }
            subArray = "";
        }

        // перезаписать строку со сдвигом в единицу
        for ( int i{}; i < encryption.size(); i++ )
        {
            // если число = 90 те символ z
            if (encryption[i] == 'A')
            {
                encryption[i] = 'Z';
                continue;
            }
            encryption[i]--;
        }
        // счетчик для второго слова
        //k++;
        // если строка сдвинулась до прежнего значения
        if (encryption == memory)
        {
            output << "IMPOSSIBLE";
            return 0;
        }
    }

    return 0;
}
