//Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».
#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b,c;
    std::cin >> a >> b >> c;
  
    if (a+b>c && a+c>b && b+c>a){ 
            std::cout << "Треугольник с такими сторонами существует\n";
        }
        else {
            std :: cout << "Треугольник с такими сторонами не существует\n";
        }
   
    system("pause");
    return 0;
}


