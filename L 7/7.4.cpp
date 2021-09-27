/*Скорость первого автомобиля V1 км / ч, второго — V2 км / ч, расстояние между ними S км.
  Определить расстояние между ними через T часов, если автомобили удаляются друг от друга.*/

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{   
    setlocale(LC_ALL, "Russian");
    double V1,V2,S,T;

    cout << "Скорость первого автомобиля = ";
    cin >> V1;
    cout << "Скорость второго автомобиля = ";
    cin >> V2;
    cout << "Расстояние между ними = ";
    cin >> S;
    cout << "Введите время в часах: ";
    cin >> T;

    double V_ob = V1 + V2;
    double S_ob = V_ob * T;

    cout << "Через " << T << "ч" << " расстояние между автомобилями будет " << S + S_ob << " км" << endl;
    system("pause");
    return 0;

}

