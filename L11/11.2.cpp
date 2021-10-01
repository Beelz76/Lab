//Даны три числа. Найти сумму двух наибольших из них
#include <iostream> 


int main()
{

    double a,m1,m2;
    m1 = 0;
    m2 = 0;
    for (int i = 0; i < 3; i++) {
        std::cin >> a;
        if (a > m1) {
            m2 = m1; m1 = a;
        }
        else if (a > m2) {
            m2 = a;
        }
    }
    std::cout << m1+m2 << std::endl;


    system("pause");
    return 0;
}

