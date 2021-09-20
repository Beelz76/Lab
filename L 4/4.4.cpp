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

    double sum = pow(a, 2) + pow(b, 2);
    double raz = pow(a, 2) - pow(b, 2);
    double pr = pow(a, 2) * pow(b, 2);
    double ch = pow(a, 2) / pow(b, 2);


    cout << "Сумма их квадратов =  " << sum << endl;
    cout << "Разность их квадратов =  " << raz << endl;
    cout << "Произведение их квадратов =  " << pr << endl;
    cout << "Частное их квадратов =  " << ch << endl;

    system("pause");
    return 0;

}

