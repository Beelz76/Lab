//Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3» 

#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B;
    std::cin >> A;
    std::cin >> B;
    if (A > 2 && B <= 3) {
        std::cout << A<<" > 2 и " <<B<<" <= 3 — " << "ИСТИНА" <<std:: endl;
    }
    else {
        std::cout << A << " > 2 и " << B << " <= 3 — " << "ЛОЖЬ" << std::endl;
    }
    system("pause");
    return 0;
}


