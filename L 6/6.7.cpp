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

    b = A * A;
    c = b * A;
    A = c * c;
    A = A * A;
    A = A * c; 

    cout << "A^15 = " << A << endl;

 
    system("pause");
    return 0;

}

