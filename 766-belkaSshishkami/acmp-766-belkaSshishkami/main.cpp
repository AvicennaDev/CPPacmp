//#include "pch.h"
#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //ifstream input("input.txt");
    //ofstream output("output.txt");

    int M, N, K;
    cin >> N >> M >> K; //нажимать enter
    //output << ">";

    // берем m из n, значит m не больше n,
    // если m больше или равно k   то yes, иначе no

    if (1 > N  || N > 100 || 1 > M || M > 100 || 1 > K || K > 10000 )	{
        return 0;
    }

    int b = N * M;
    if (K <= b) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
