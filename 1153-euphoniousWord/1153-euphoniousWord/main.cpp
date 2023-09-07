//1153-euphoniousWord
//тесты bbboo bbcooe aaaa aaaaabbbbbbabaaaaaabbbbbbbaaaabb
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    char character{}, worb{}, vowels[]{"aeiouy"};
    int countChar{}, charConsonant{}, charVowel{};
    bool vowelB = false;

    while (input >> character)
    {
            // проверка на гласную букву
            for (int i{}; i < strlen(vowels); i++ )
            {
                if (character == vowels[i])
                {
                    vowelB = true;
                    break;
                }

            }
            // подсчет считанного символа
                if (vowelB)
                {
                    charVowel++;
                    // если встретили гл, значит согл считать нужно занаво
                    charConsonant = 0;
                    //для следующего гласного символа
                    vowelB = false;
                }
                else
                {
                    charConsonant++;
                    // если встретили согл, значит гл считать занаво
                    charVowel = 0;
                }
                // подсчет добавляемых символов
                if (charVowel == 3)
                {
                    countChar++;
                    charVowel = 1;
                }
                else if (charConsonant == 3)
                {
                    countChar++;
                    charConsonant = 1;
                }
    }
    output << countChar;
    return 0;
}
