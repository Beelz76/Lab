//Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).
#include <iostream>
using namespace std;

int main() {
    int n;
    double s=1.1, b = 1.1;
    cin >> n;

    for (int i = 1; i < n; i++) {
        b += 0.1;
        s *= b;
    }
    cout << s << endl;
    system("pause");
    return 0;
}
