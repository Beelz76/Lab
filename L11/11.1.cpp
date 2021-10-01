/*Даны две переменные целого типа : A и B.Если их значения не равны, то присвоить каждой переменной большее из этих значений,
  а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B*/
#include <iostream> 
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    std::cin >> A >> B;

    if (A > B) {
        B = A;
    }
    else if (B > A) {
        A = B;
    }
    else {
        A = 0;
        B = 0;
    }
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;
    system("pause");
    return 0;
}


