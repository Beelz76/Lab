//Найти расстояние между двумя точками с заданными координатами 
#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2;
    cout << "Введите координаты 1 точки: ";
    cin >> x1>> y1;
    cout << "Введите координаты 2 точки: ";
    cin >> x2>> y2;

    double ras = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Расстояние между точками = " << ras << endl;
    system("pause");
    return 0;

}

