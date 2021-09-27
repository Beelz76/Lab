// Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A;
    cout << "Введите трехзначное число: ";
    cin >> A;
    A = A % 100 * 10 + A / 100;
    cout <<"Полученное число:  "<< A << endl;
    



    system("pause");
    return 0;


}
