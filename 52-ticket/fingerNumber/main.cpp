#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int coupon{}, a{}, b{} ;
    std::ifstream("input.txt") >> coupon;

    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
        {
            a += coupon % 10;
        }
        else {
            b += coupon % 10;
        }
        coupon /= 10;
    }

    std::ofstream("output.txt") << ( a == b ? "YES" : "NO");
    cout << ( a == b ? "YES" : "NO");

    return 0;
}

/*
    int ticket{}, left{}, right{};

    cout << "enter tickets = ";
    cin >> ticket;

     right += ticket%10;
     ticket /=10;

     right += ticket%10;
     ticket /=10;

     right +=ticket%10;
     ticket /=10;

     left +=ticket%10;
     ticket /=10;

     left +=ticket%10;
     ticket /=10;

     left +=ticket;

     //cout << (left == right ? "yes" :"no");


 * */
