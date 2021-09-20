/* Даны координаты двух противоположных вершин прямоугольника:
   (x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат. 
   Найти периметр и площадь данного прямоугольника. */


#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1,y1,x2,y2;
    
    cout<< "Координаты первой точки: ";
    cin >> x1 >> y1;
    cout <<"Координаты второй точки: ";
    cin >> x2 >> y2;
 
    double S = abs(x2 - x1) * abs(y2 - y1);
    double P = 2 * (abs(x2 - x1) + abs(y2 - y1));

    cout << "S = " << S << endl;
    cout << "P = " << P << endl;

 
    system("pause");
    return 0;

}

