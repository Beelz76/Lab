//С начала суток прошло N секунд (N — целое). Найти количество секунд, прошедших с начала последней минуты.

#include <iostream> 
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;
 
    cout << "С момента последней минуты прошло: " << N % 60 << "с" << endl;

    system("pause");
    return 0;
}



