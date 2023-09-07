#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream input ("input.txt");
  ofstream output("output.txt");

  int bushes{}, maxBeries{}, n{}, sum{};
  input >> bushes;

  int* berries = new int [bushes];

  for ( int i {}; i < bushes; i++ )
  {
      input >> berries [i];
  }
  // - 1 потому что элементов 4 как и кустов, но индексы начинаются с 0, значит их 3
  sum = berries [bushes-1] + berries[0] + berries[1];
  n=1;

  for ( int i = 1; i < bushes-1 ; i++ )
  {
      sum = berries[i-1] + berries[i] + berries[i+1];
      if(sum > maxBeries)
      {
          maxBeries = sum;
          n = i + 1;
      }
  }

  sum = berries[0] + berries[bushes-1] + berries[bushes-2];
  if ( sum > maxBeries)
  {
      maxBeries = sum;
      n = bushes;
  }

  output << maxBeries << " " << n;

  delete [] numbers;
  return 0;

}
