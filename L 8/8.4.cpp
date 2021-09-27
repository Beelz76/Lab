// Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A;
    cout << "Введите двузначное число: ";
    cin >> A;
    A = A % 10 * 10 + A / 10;
    cout <<"При перестановке цифр получилось число "<< A << endl;
    



    system("pause");
    return 0;


}
