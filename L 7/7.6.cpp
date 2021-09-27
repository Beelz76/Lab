/* Найти решение системы линейных уравнений вида
A1·x + B1·y = C1,
A2·x + B2·y = C2, */


#include <locale.h>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a1, b1, c1, a2, b2, c2;
    cout << "Введите первые три коэффициента: ";
    cin >> a1; cin >> b1; cin >> c1;
    cout << "Введите вторые три коэффициента: ";
    cin >> a2; cin >> b2; cin >> c2;

    double x = (c2 * b1 - b2 * c1) / (b1 * a2 - b2 * a1);
    double y = (c1 - a1 * x) / b1;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    system("pause");
    return 0;


}
