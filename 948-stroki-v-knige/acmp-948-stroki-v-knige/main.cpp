#include <iostream>
#include <stdio.h>
using namespace std;



int main(){
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);

   int stroka=0, nomerStroki=0, kolichestvoStrokNaStraniche=0, strokaSchet=0, n=1; // верно ли задать n  изначально 1 ?
   cout << "kolichestvoStrokNaStraniche = "; // предположим 6
   cin >> kolichestvoStrokNaStraniche;

   cout << "nomerStroki =  " ;              // предположим 8
   cin >> nomerStroki;
                                            // возможно для сайта может тут быть ошибка. (разбить на 2 if)
                                            // как лучше? (быстрее будет работать код)

                                            // проверка  на выход за рамки установленного количества
   if ( (1 > kolichestvoStrokNaStraniche) || (kolichestvoStrokNaStraniche > 200) || (1 > nomerStroki) || (nomerStroki > 20000 )){
   cout << "vne diapazona \n " ;
       return 0;
   }

                                            // от длины имени переменной-зависит скорость работы программы?
                                            // определим номер страницы
                                            // stroka переменная для контроля текущего номера строки по книге
                                            // nomerStroki заданная переменна, какого то номера строки в книге, относительно книги
 for ( stroka=1; stroka < nomerStroki; stroka++ ){
                                            // замечание, условие-до тех пор пока...
                                            // в цикле начать нужно с 0
      strokaSchet++ ;

                                            // раздел отвечающий за присвоение номера страницы
       if (strokaSchet > kolichestvoStrokNaStraniche ){
           n++;
           strokaSchet = 1;                 // обнуление для отсутствия возвращения в условный оператор
                                            // проверка достижения
                                            // строка для контроля верности вывода
     //      cout << "n= " <<  n << endl;
       }
     //  else {
           // строка для контроля верности вывода
     //     cout << "n= " <<  n << endl; //endl прочитать
     //  }
       if (stroka+1 == nomerStroki) // помоему тут ошибка будет в том что я цикл не окончил, но уже отправил данные на вывод
          {
           cout << "nomer stroki na stranche = " <<  ++strokaSchet << endl; // вывод strokaSchet
           cout << "n = " <<  n << endl;
         }
   }
  return 0;
}
