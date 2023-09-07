#include <fstream>
#include <iostream>

using namespace std;

int main()
{
   // ifstream input("input.txt");
   // ofstream output("output.txt");

    int kolmost=0, h=0;
    int vmost[10000];
    cout<< "kolmost=";
  //  input>>kolmost;
    cin>> kolmost ;
    if(1<=kolmost && kolmost<=1000){
    }
    else {
        cout<<"error\n";
        return 0;
    }
    for(h;h<kolmost;h++){
        cin>>vmost[h];
        if(vmost[h] < 0 || vmost[h] >10000){
            cout<<"error";
            return 0;
        }
        if(vmost[h]<=437){
            cout<<"Crash "<<h+1;
            return 0;
        }
   /*     if(h+1 >= kolmost){
            cout<<"no crash";
            return 0;
        }
            */

    }
cout<<"No crash";
    return 0;
}
