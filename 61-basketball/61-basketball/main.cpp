#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int a{}, b{}, team1{}, team2{};
    //string draw = "draw";

    ifstream input("input.txt");
    ofstream output("output.txt");


    for (int i{}; i < 4; i++){
        // запоминает положение курсора,
        input >> a >> b;
        team1 += a;
        team2 += b;

    }

   // (team1 > team2 ? 1 : (team1 == team2 ? "draw" : 2))

   if (team1 > team2) ofstream("output.txt") << 1;
   else if (team1 < team2)  ofstream("output.txt") << 2;
   else  ofstream("output.txt") << "DRAW";
    return 0;
}
