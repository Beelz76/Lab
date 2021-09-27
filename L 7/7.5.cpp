//Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B;
    cout << "Введите коэффициент A: ";
    cin >> A;
    cout << "Введите коэффициент B: ";
    cin >> B;

    cout << "x = " << -B / A << endl;

    system("pause");
    return 0;


}



