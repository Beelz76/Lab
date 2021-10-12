#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i += 2) {
        s += i;
        cout << s << endl;
    }

    system("pause");
    return 0;
}  
