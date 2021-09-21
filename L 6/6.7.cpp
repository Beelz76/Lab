// A^15

#include <locale.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int A,b,c;
    
    cout << "A: ";
    cin >> A;

    b = A * A; //^2
    c = b * A; //^3
    A = c * c; //^6
    A = A * A; //^12
    A = A * c; //^15

    cout << "A^15 = " << A << endl;

 
    system("pause");
    return 0;

}

