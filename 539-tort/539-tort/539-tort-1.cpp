#include <iostream>

using namespace std;

int main1()
{
    int ludi;
    cout << "ludi = ";
    cin >> ludi;
    if(ludi <= 0 || ludi > 1000){
        cout << "error";
        return 0;
    }

    if(ludi % 2){
        cout << "razrez's = " << ludi;
    }
    else{
        cout << "razrez's = "<< ludi/2;
    }
    return 0;
}
