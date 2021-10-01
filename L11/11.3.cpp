/*На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) 
  расположена ближе к A, и вывести эту точку и ее расстояние от точки A.*/
#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    A = 0;
    std::cin>> B >> C;
    if (abs(B - A) < abs(C - A)) {
        std::cout << "Точка B ближе\n" << "B = " << B << std::endl;
        std::cout << "Расстояние от А до Б = " << abs(B - A) << std::endl;
    }
    else {
        std::cout << "Точка C ближе\n" << "C = " << C << std::endl;
        std::cout << "Расстояние от А до C = " << abs(C - A) << std::endl;
    }
   
    system("pause");
    return 0;
}

