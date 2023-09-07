#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a{}, b{};

    std::ifstream("input.txt") >> a >> b;

    if (a%b == 0 || b%a == 0) std::ofstream("output.txt")  << 1;
    else std::ofstream("output.txt")  << a * b + 1;


    return 0;
}
