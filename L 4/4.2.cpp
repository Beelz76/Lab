//Дан диаметр окружности d. Найти ее длину L = π·d. В качестве значения π использовать 3.14.
    
#include <iostream>

using namespace std;
int main()
{
    double d, Pi, L;
    Pi = 3.14;

    cout << "Enter d: ";
    cin >> d;

    L = Pi * d;

    cout << "L= " << L << endl;
    system("pause");
        return 0;

}
