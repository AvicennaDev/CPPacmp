#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");

    int elements{};

    input >> elements;

    int* numbers = new int [elements];

    for ( int i{};i < elements ;i++ )
    {
        input >> numbers [i];
    }

    for ( int i{}; i < elements; i++ )
    {
        output << numbers [elements-i-1] << " ";

    }



    delete [] numbers;

    return 0;
}
