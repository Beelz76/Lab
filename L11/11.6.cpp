/*Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.*/
#include <iostream> 
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Russian");
    int k, a,b;
    std::cin >> a;
    k = 0;
    b = a;
    while (b > 0) {
        k++;
        b = b / 10;
    }

    if (a % 2 == 0) {std::cout << "Четное ";}
    else {std::cout << "Нечетное ";}

    if (k == 1) { std::cout << "Однозначне число\n"; }
    else if (k == 2) { std::cout << "Двузначное число\n"; }
    else { std::cout << "Трехзначное число\n"; }

    system("pause");
    return 0;
}

