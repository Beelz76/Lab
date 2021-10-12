#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, s =1;
    double A;
    cin >> A >> N;
  
    for (int i = 1; i <= N ;i++) {
        s += pow(-A, i); 
    }

    cout << s << endl;
    system("pause");
    return 0;
}  
