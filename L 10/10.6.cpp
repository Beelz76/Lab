/*Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника.
  Проверить истинность высказывания: «Треугольник со сторонами a, b, c является прямоугольным».*/
#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        std::cout << "Треугольник является прямоугольным\n";
    }
    else {
        std::cout << "Треугольник не является прямоугольным\n";
    }
   
    system("pause");
    return 0;
}


