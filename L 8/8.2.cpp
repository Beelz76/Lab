/* Даны целые положительные числа A и B(A > B).На отрезке длины A размещено максимально возможное количество
   отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A.*/

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B;
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    int K = A / B;
    cout << "Количество целых отрезков В, размещенных на отрезеке A: " << K  << endl;



    system("pause");
    return 0;


}
