// Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{   
    setlocale(LC_ALL, "Russian");
    double X,A,onekg,Y;
    cout << "Введите кол-во кг: ";
    cin>> X;
    cout << "Введите общую стоимость: ";
    cin >> A;
    onekg = A / X;
    cout << "1 кг стоит " << onekg << " руб"<<endl;

    cout << "Сколько килограмм хотите купить?" << endl;
    cin >> Y;
    cout << Y << " кг будет стоить " << onekg * Y << " руб" << endl;

    system("pause");
    return 0;
}

