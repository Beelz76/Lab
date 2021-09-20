//Даны стороны прямоугольника a и b. Найти его площадь S = a·b и периметр P = 2·(a + b).

#include <iostream>
using namespace std;
int main()
{
    double a,b;
    cout << "Enter a, b: " << endl;

    cin >> a;
    cin >> b;

  
    cout << "S= " << a * b << endl;
    cout << "P= " << 2 * (a + b) << endl;
   
    return 0;

}

