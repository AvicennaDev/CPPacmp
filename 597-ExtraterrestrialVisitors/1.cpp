


// код для асмр
#include <iostream>
#include<fstream> //для асмр

using namespace std;

int main()
{
    //r1, r2, r3 (1 ≤ r1, r2, r3 ≤ 109)
    int r1, r2, r3, pole;
    ifstream("input.txt") >> r1 >> r2 >> r3; //  записать в блокнот вводные данные

    pole=r1*2-r2*2-r3*2;

    if (pole>=0){
        ofstream("output.txt")<<"YES";
    }
    else {
        ofstream("output.txt")<<"NO";
    }
     // вывести значение в блокнот
    return 0;
}








/*
 * // мое решение
#include <iostream>

using namespace std;

int main()
{
    //r1, r2, r3 (1 ≤ r1, r2, r3 ≤ 109)
    int r1, r2, r3, pole;
    cout << "r1 = ";
    cin >> r1;
    cout << "r2 = ";
    cin >> r2;
    cout << "r3 = ";
    cin >> r3;

    pole=r1*2-r2*2-r3*2;
    //cout<<"pole= "<< pole<< endl;

    if (pole>0){
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}

*/
