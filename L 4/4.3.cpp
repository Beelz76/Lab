#include <locale.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите a, b: " << endl;

    cin >> a;
    cin >> b;


    cout << "Среднее арифметическое =  " << (a + b) / 2 << endl;

    system("pause");
    return 0;

}