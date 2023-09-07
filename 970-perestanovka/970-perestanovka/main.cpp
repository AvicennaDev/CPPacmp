#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    if (a+b == c){
        cout << "yes";
    }
    else if (a+c == b){
        cout << "yes";
    }
    else if (c+b == a){
        cout << "yes";
    }
    else{
        cout << "no";
    }


   /* if(a1+a2 == maks){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    */
    return 0;
}
