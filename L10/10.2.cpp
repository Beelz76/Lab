//Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».

#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B,C;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    if (A<B && B<C) {
        std::cout << A<<" < "<<B<<" < "<< C<<" - " << "ИСТИНА" << std::endl;
    }
    else {
        std::cout << A << " < " << B << " < " << C << " - " << "ЛОЖЬ" << std::endl;
    }
    system("pause");
    return 0;
}


