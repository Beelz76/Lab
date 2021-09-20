/* Даны три точки A, B, C на числовой оси. Точка C расположена
   между точками A и B. Найти произведение длин отрезков AC и BC */


#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    
    cout<< "Значение A: ";
    cin >> A;
    cout << "Значение B: ";
    cin >> B;
    cout << "Значение C: ";
    cin >> C;
 

    double AC = abs(A - C);
    double BC = abs(B - C);

    cout << "AC * BC = " << AC * BC << endl;


 
    system("pause");
    return 0;

}

