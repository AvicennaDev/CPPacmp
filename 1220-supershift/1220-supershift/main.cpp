#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int countNumber{}, shift{};
    input >> countNumber;
    int* numbers = new int[countNumber];
    for (int i{}; i < countNumber; i++)
    {
        input >> numbers[i];
    }
    input >> shift;


    // Если сдвиг положительный, то превращаем его в отрицательный
    if (shift > 0)
    {
        shift = (shift % countNumber) - countNumber;
    }

    // Создаём пустой массив, в котором будет ответ находиться
    int* shiftedNumbers = new int[countNumber];
    for (int i = 0; i < countNumber; i++)
    {
        // Вычисляем сдвинутый индекс (это работает только с отрицательным индексом)
        int shiftedIndex = ((i - shift) % countNumber);
        shiftedNumbers[i] = numbers[shiftedIndex];
    }


    for (int i{}; i < countNumber; i++)
    {
        output << shiftedNumbers[i] << " ";
    }

    delete[] numbers;
    delete[] shiftedNumbers;
    return 0;
}
