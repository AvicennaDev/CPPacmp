#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // классы ifstream, input экземпляры классы
    ifstream input("input.txt");
    ofstream output("output.txt");

    int number{};
    //считать
    input >> number;

    output << "The next number for the number " << number <<" is " << number+1 << "."<<endl;
    output << "The previous number for the number " << number <<" is " << number-1<<".";


    return 0;
}
