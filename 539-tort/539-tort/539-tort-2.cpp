#include <iostream>

using namespace std;

int main()
{
    int ludi;
    cout << "ludi = ";
    cin >> ludi;
    if(ludi <= 0 || ludi > 1000){
        cout << "error";
        return 0;
    }
    int result = ludi / 2 + (ludi % 2 *(ludi / 2 + 1));
    cout << "razrez's = " << result;
    return 0;
}
