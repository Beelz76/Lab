/* Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное 
   количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A..*/

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    int K = A % B;
    cout << "Длина незанятой части отрезка А: " << K  << endl;



    system("pause");
    return 0;


}
