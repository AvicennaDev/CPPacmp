#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // https://www.youtube.com/watch?v=XFuZHCWBCAg
    int  sum{}, coin{};
    int expense3{}, expense5{};

    ifstream input ("input.txt");
    ofstream output ("output.txt");

    input >> coin;

    while (sum != coin)
    {
        expense5++;
        sum +=5;

        if (sum > coin)
        {
            expense3++;
            expense5 = 0;
            sum = expense3*3;
        }
    }
    output << expense5 << " " << expense3;
return 0;
}



/*

// не мое, верное
#include <iostream>
using namespace std;
int main()
{
 int r, r1 = 0, r2 = 0;
 cin >> r;
 r1 = r / 5;
 r = r % 5;
 if (r % 3 == 0)
  r2 += r / 3;
 else
 while (r % 3 != 0)
 {
 r += 5;
 r1--;
 }
 r2 = r / 3;
 cout << r1 << " " << r2;
 return 0;
}
*/

