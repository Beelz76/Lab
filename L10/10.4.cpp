//Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность».

#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int A;
    std::cin >> A;
    int a = A / 100;
    int b = A / 10 % 10;
    int c = A % 10;

        if (a > b && b > c) {
            std::cout << "Убывающая последовательность\n";
    }
        else if (a < b && b < c) {
            std::cout << "Возрастающая последовательность\n";
        }
        else {
            std::cout << "Цифры числа не образуют последовательность\n";
        }
    system("pause");
    return 0;
}


