//Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».
#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int A;
    std::cin >> A;
    int a = A % 10;
    int b = A / 10 % 10;
    int c = A / 100 % 10;
    int d = A / 1000 % 10;
    if (a == d && b == c) {
        std::cout << "Данное число является палиндромом\n";
    }
    else {
        std::cout << "Данное число не является палиндромом\n";
    }
    system("pause");
    return 0;
}


