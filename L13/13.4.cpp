//Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, s =1;
    double A;
    cin >> A >> N;
    
    for (int i = 1; i <= N; i++) {
        s += pow(A, i);
    }
    cout << s << endl;
    system("pause");
    return 0;
}  
