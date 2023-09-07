#include <iostream>

using namespace std;

int main11()
{
    int employee1=0, employee2=0, employee3=0;

    cout << "employee1= ";
    cin >> employee1;
    cout << "employee2= ";
    cin >> employee2;
    cout << "employee3= ";
    cin >> employee3;

    if (employee1 > 10000 || employee2 > 10000 || employee1 > 10000
            || employee1 < 0 || employee2 < 0 || employee1 < 0 ){
        cout << "error";
        return 0;
    }
    // перебор
    // все остальные условия if переделать так же,
    // как написано нижнее if
    if (employee1 >= employee2 && employee2 >= employee3){
       cout << " max-min= " << employee1 - employee3;
       return 0;
    }
    if (employee3 >= employee2 >= employee1){
       cout << " max-min= " << employee3 - employee1;
       return 0;
    }
    if (employee2 >= employee1 >= employee3){
       cout << " max-min= " << employee2 - employee3;
       return 0;
    }
    if (employee2 >= employee3 >= employee1){
       cout << " max-min= " << employee2 - employee1;
       return 0;
    }
    if (employee3 >= employee1 >= employee2){
       cout << " max-min= " << employee3 - employee2;
       return 0;
    }
    if (employee1 >= employee3 >= employee2){
       cout << " max-min= " << employee1 - employee2;
       return 0;
    }

}
