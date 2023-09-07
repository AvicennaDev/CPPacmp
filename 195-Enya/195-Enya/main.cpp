#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output("output.txt");

    int count{}, width{}, height{};
    input >> count >> width >> height;

    output << width*height*2*count;





    return 0;
}
