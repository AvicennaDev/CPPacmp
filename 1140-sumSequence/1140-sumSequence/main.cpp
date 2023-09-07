// 1140-sumSequence
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   ifstream input ("input.txt");
   ofstream output ("output.txt");
   int number{}, sum{}, number2{111};
   bool zero = true;
   do
   {
     input >> number;
     sum +=number;
     if (number == 0 && number2 == 0)
     {
        zero = false;
     }
     number2 = number;
   } while (zero);
   output << sum;
   return 0;
}
