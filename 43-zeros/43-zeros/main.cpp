// 43-zeros
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    char number{};
    int zero{}, zeroMax{};
    while (input >> number)
    {
      if (number == '0')
      {
          zero++;
          // асмр принял с проверкой внутри, а не после этого if
          if (zeroMax < zero)
          {
                zeroMax = zero;
          }
      }
      else
      {
           zero = 0;
      }
    }
    output << zeroMax;
    return 0;
}
