// Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл 

#include <locale.h>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double I;
    cout << "Введите размер файла в байтах: ";
    cin >> I;
    cout << "Перевод в килобайты: " << I / 1024 << endl;

    system("pause");
    return 0;


}
