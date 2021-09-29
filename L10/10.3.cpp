//Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».

#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int A;
    std::cin >> A;
    if (A % 2 == 0 && A >= 10 && A <= 99) {
        std::cout << "ИСТИНА\n";
    }
    else {
        std::cout << "ЛОЖЬ\n"; 

    }
    system("pause");
    return 0;
}


 
  
