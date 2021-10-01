/*Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка */
#include <iostream> 
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Russian");
    double x, y;
    std::cin >> x >> y;
    if (x > 0 && y > 0) {
        std::cout << "Первая четверть\n";
    }
    else if (x < 0 && y > 0) {
        std::cout << "Вторая четверть\n";
    }
    else if (x < 0 && y < 0) {
        std::cout << "Третья четверть\n";
    }
    else {
        std::cout << "Четвертая четверть\n";
    }

    system("pause");
    return 0;
}

