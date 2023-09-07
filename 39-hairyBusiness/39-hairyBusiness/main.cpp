#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input ("input.txt");
    ofstream output ("output.txt");
    int countPrice{}, sold{}, maxPrice{},index2{};
    input >> countPrice;
    int* price = new int [countPrice];
    for ( int i{}; i < countPrice; i++ )
    {
      input >> price[i];
    }
    // рост волоса до первой стрижки равен инденкс+1
    // индекс увеличен для начала не с прошлого максимума

    while ( index2 < countPrice )
    {
        for(int j{index2}; j <  countPrice; j++ )
        {
            if(price[maxPrice] < price[j])
            {
                maxPrice = j;
            }
        }
        // из макс элемента вычитаетсчя элемент начала счета, +1 см роста волоса
        sold += price[maxPrice] * (maxPrice-index2+1);
        // начать проверку с позиции +1 от использованного максимума
        index2 = maxPrice+1;

        // максимуму присвоить значение текущего элемента из оставшихся
        maxPrice= index2;
    }
    output << sold;
    delete [] price;
    return 0;
}
 
