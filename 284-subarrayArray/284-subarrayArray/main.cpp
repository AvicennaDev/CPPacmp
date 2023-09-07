#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream input ("input.txt");
   ofstream output ("output.txt");

   int size{}, pairNumber{}, A1{}, A2{};

   input >> size;
   int*  A = new int [size];
   for ( int i{}; i<size; i++)
   {
        input >> A[i];
   }

   input >> pairNumber;

   for ( int i{}; i < pairNumber; i++ )
   {
    input >> A1 >> A2;
    A1--;
    A2--;
    for ( A1; A1 <= A2; A1++ )
    {
       output << A[A1] << " ";
    }
    output << endl;
   }
    return 0;
}
