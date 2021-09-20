// Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь 

#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1,y1,x2,y2,x3,y3;
    
    cout<< "Координаты первой точки: ";
    cin >> x1 >> y1;
    cout <<"Координаты второй точки: ";
    cin >> x2 >> y2;
    cout <<"Координаты третьей точки: ";
    cin >> x3 >> y3;
 
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)); 

    double P = a + b + c;
    double S = sqrt((P / 2) * (P / 2 - a) * (P / 2 - b) * (P / 2 - c));


    cout << "S = " << S << endl;
    cout << "P = " << P << endl;

 
    system("pause");
    return 0;

}

