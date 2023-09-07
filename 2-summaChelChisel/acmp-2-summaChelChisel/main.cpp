//#include "pch.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {
                                     // ifstream input("input.txt");
                                    // ofstream output("output.txt");
    int a;
    int y;
    y = 0;
    //input >> a;
    cout << "a= ";
    cin >> a;
    if ( (a < -10000)  || (a > 10000)  )
    {
        return 0;
    }

    if (a <= 0) {

        for (int h = 1; h >= a; h--) {

            y += h;
        }
    }
    else {

        for (int h = 1; h <= a; h++) {

            y += h;
        }
    }

    //output << y;
    cout<<"y= "<< y;
    return 0;
}
