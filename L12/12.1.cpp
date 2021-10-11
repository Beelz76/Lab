/*Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
  Вывести дату в виде текста (например, «пятое января»).*/
#include <iostream> 
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n,m;
    std::cin >> n >> m;

    switch (n) {
        case 10:cout << "десятое "; break;
        case 20:cout << "двадцатое "; break;
        case 30:cout << "тридцатое "; break;
    }

    if (n / 10 == 2 && n%10!=0) {cout << "двадцать ";}
    else if(n / 10 == 3 && n % 10 != 0){ cout << "тридцать ";}

    if (n / 10 == 1) {
        switch (n % 10) {
        case 1:cout << "одиннадцатое "; break;
        case 2:cout << "двенадцатое "; break;
        case 3:cout << "тринадцатое "; break;
        case 4:cout << "четырнадцатое "; break;
        case 5:cout << "пятнядцатое "; break;
        case 6:cout << "шестнадцатое "; break;
        case 7:cout << "семнадцатое "; break;
        case 8:cout << "восемнадцатое "; break;
        case 9:cout << "девятнадцатое "; break;
        }
    }
    if (n / 10 != 1) {
        switch (n % 10) {
        case 1: cout << "первое "; break;
        case 2: cout << "второе "; break;
        case 3: cout << "третье "; break;
        case 4: cout << "четвертое "; break;
        case 5: cout << "пятое "; break;
        case 6: cout << "шестое "; break;
        case 7: cout << "седьмое "; break;
        case 8: cout << "восьмое "; break;
        case 9: cout << "девятое "; break;
        }
    }

    switch (m) {
        case 1: cout << "января\n"; break;
        case 2: cout << "февраля\n"; break;
        case 3: cout << "марта\n"; break;
        case 4: cout << "апреля\n"; break;
        case 5: cout << "мая\n"; break;
        case 6: cout << "июня\n"; break;
        case 7: cout << "июля\n"; break;
        case 8: cout << "августа\n"; break;
        case 9: cout << "сентября\n"; break;
        case 10:cout << "октября\n"; break;
        case 11:cout << "ноябя\n"; break;
        case 12:cout << "декабря\n"; break;
    }
    
    system("pause");
    return 0;
}