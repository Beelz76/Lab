//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.
#include <iostream>
using namespace std;

int main() {
    double n, s;
    cin >> n;

    for (double i = 0.1; i <= 1; i += 0.1) {
        s = n * i;
        cout << i<<" kg stoit " << s << endl;
    }

    system("pause");
    return 0;
}
