#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int Pirtr{}, Katy{}, Sergey{}, cranes{};

    input >> cranes;
    // 2х + у = 60, 2х + 2*2х=60, х=S/6

    Pirtr = Sergey = cranes / 6;
    Katy = Pirtr *2 * 2;
    output << Pirtr << " " << Katy << " " << Sergey;
    return 0;
}
