#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    long long a{}, b{}, result{};
   input >> a >> b;
   result = (a% abs (b) + abs(b)) % abs(b);

   output << result;

   return 0;
}
