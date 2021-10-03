/*Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать 
  три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление 
  робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды.*/
#include <iostream> 
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    char C;
    cin >> C >> N;
    
    switch (C) {
    case 'С':
        switch (N) {
        case  1:C = 'З'; break;
        case -1:C = 'В'; break;
        case  0:C = 'С'; break;
        }break;
    case 'Ю':
        switch (N) {
        case  1:C = 'В'; break;
        case -1:C = 'З'; break;
        case  0:C = 'Ю'; break;
        }break;
    case 'З':
        switch (N) {
        case  1:C = 'Ю'; break;
        case -1:C = 'С'; break;
        case  0:C = 'З'; break;
        }break;
    case 'В':
        switch (N) {
        case  1:C = 'С'; break;
        case -1:C = 'Ю'; break;
        case  0:C = 'В'; break;
        }break;
    }
    cout << C << endl;

    system("pause");
    return 0;
}

