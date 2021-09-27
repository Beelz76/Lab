/*Дан номер некоторого года (целое положительное число). Определить соответствующий 
  ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год*/

#include <iostream> 
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int K;
    cin >> K;
    
        cout <<"Номер столетия: "<< (K - 1) / 100 + 1 << endl;
    
    system("pause");
    return 0;
}


