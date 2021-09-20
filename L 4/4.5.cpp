//Даны два ненулевых числа. Найти сумму, разность, произведение ичастное их модулей.

#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите a, b: " << endl;
    cin >> a;
    cin >> b;

    double sum = abs(a) + abs(b);
    double raz = abs(a) - abs(b);
    double pr = abs(a) * abs(b);
    double ch = abs(a) / abs(b);


    cout << "Сумма их модулей =  " << sum << endl;
    cout << "Разность их модулей =  " << raz << endl;
    cout << "Произведение их модулей =  " << pr << endl;
    cout << "Частное их модулей =  " << ch << endl;

    system("pause");
    return 0;

}

