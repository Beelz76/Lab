// Из радианов в градусы

#include <locale.h>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{   
    setlocale(LC_ALL, "Russian");
    double a,r;
    const double PI = 3.141592653589793238463;
    cout << "Ведите значение угла в радианах: ";
    cin >> r;

    a = r * (180 / PI);

    cout <<"Перевод в градусы: "<< a <<"°" << endl;
 
    system("pause");
    return 0;

}

