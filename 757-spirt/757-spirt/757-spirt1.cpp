#include <iostream>

using namespace std;

int main()
{
   int C, H, O, c=0, h=0, o=0;

   cout << "C = ";
   cin >> C;
   cout << "H = ";
   cin >> H;
   cout << "O = ";
   cin >> O;

   //while (true)
   for( ; ; ){
       c+=2;
       h+=6;
       o++;
      if(c>C || h > H || o >O ){
          cout << "atomov = "<< --o;
          return 0;
               }
   }
}
