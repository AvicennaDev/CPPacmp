#include <iostream>

using namespace std;

int main()
{
    int r1=0, r2=0, r3=0;

    cout << "r1 = ";
    cin >> r1;
    cout << "r2= ";
    cin >> r2;
    cout << "r3= ";
    cin >> r3;
    // проверка?
    if (r2+r3<=r1){
        cout << "yes";
        }
    else{
        cout << "no";
    }
    return 0;
}
