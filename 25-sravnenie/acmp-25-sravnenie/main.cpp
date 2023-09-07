//#include "pch.h"
#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //ifstream input("input.txt");
    //ofstream output("output.txt");

    int A, B;
    //input >> A >> B;
    cout<< "A= ";
    cin>> A;

    cout<< "B= ";
    cin>> B;



    if (-2*pow(10, 9)>A || A > 2 * pow(10, 9) ) {
        return 0;
    }
    if (-2 * pow(10, 9) > B || B > 2 * pow(10, 9)) {
        return 0;
    }

    if (A == B) {
        //output << "=";
        cout << "=";
        return 0;
    }
    if (A < B) {
        //output << "<";
        cout<< "<";
        return 0;
    }
    if (A > B) {
        //output << ">";
        cout<< ">";
        return 0;
    }
}
