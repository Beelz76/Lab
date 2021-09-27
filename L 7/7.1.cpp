// Из градусов в радианы

#include <locale.h>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{   
    setlocale(LC_ALL, "Russian");
    double a,r;
    const double PI = 3.141592653589793238463;
    cout << "Ведите значение угла в градусах: ";
    cin >> a;


    r = a * (PI / 180);

    cout <<"Перевод в радианы: "<< r << endl;
 
    system("pause");
    return 0;

}

