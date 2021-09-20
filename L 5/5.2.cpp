//Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.

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

    cout << "AC = " << AC << endl;
    cout << "BC = " << BC << endl;
    cout << "AC + BC = " << AC + BC << endl;


 
    system("pause");
    return 0;

}

