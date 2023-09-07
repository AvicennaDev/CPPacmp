#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream input("input.txt");
    ofstream output("output.txt");

    int watermelon{}, foot{}, maxFoot{}, minFoot{};

    input >> watermelon;

    for (int i{} ; i< watermelon ;i++ )
    {
        input >> foot;
        if (i == 0){
        minFoot = foot;
        maxFoot = foot;
        }
        else if (foot < minFoot) minFoot = foot;
        else if (foot > maxFoot) maxFoot = foot;
        //cout << foot << endl;

    }
    //cout << "minFoot = " << minFoot << " " << "maxFoot = " << maxFoot;
    output << minFoot << " " << maxFoot ;

 return 0;
}
