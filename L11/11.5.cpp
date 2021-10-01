/*Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.*/
#include <iostream> 
#include <locale.h>

int op(int a) {
    if (a > 0 && a % 2 == 0) {
        return 22;
    }
    else if (a > 0 && a % 2 != 0) {
        return 21;
    }
    else if (a < 0 && a % 2 == 0) {
        return 12;
    }
    else if (a < 0 && a % 2 != 0) {
        return 11;
    }
    else return 0;
}

int main(){
    setlocale(LC_ALL, "Russian");
    int a;
    std::cin >> a;
    switch (op(a)) {
    case 22: std::cout << "Положительное четное число\n"; break;
    case 21: std::cout << "Положительное нечетное число\n"; break;
    case 12: std::cout << "Отриццательное четное число\n"; break;
    case 11: std::cout << "Отрицательное нечетное число\n"; break;
    case  0: std::cout << "Нулевое число\n"; break;
    }
   

    system("pause");
    return 0;
}

