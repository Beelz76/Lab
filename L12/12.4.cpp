/*Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».*/
#include <iostream> 
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cin >> n;

        switch (n / 100) {
        case 1:cout << "сто "; break;
        case 2:cout << "двести "; break;
        case 3:cout << "триста "; break;
        case 4:cout << "четыреста "; break;
        case 5:cout << "пятьсот "; break;
        case 6:cout << "шестьсот "; break;
        case 7:cout << "семьсот "; break;
        case 8:cout << "восемьсот "; break;
        case 9:cout << "девятьсот "; break;
    }

    if (n / 10 % 10 == 1) {
        switch (n % 10) {
        case 0:cout << "десять\n"; break;
        case 1:cout << "одиннадцать\n"; break;
        case 2:cout << "двенадцать\n"; break;
        case 3:cout << "тринадцать\n"; break;
        case 4:cout << "четырнадцать\n"; break;
        case 5:cout << "пятнадцать\n"; break;
        case 6:cout << "шестнадцать\n"; break;
        case 7:cout << "семнадцать\n"; break;
        case 8:cout << "восемнадцать\n"; break;
        case 9:cout << "девятнадцать\n"; break;
        }
    }
        
    if (n / 10 % 10 != 1) {
        switch (n / 10 % 10) {
        case 2:cout << "двадцать "; break;
        case 3:cout << "тридцать "; break;
        case 4:cout << "сорок "; break;
        case 5:cout << "пятьдесят "; break;
        case 6:cout << "шестьдесят "; break;
        case 7:cout << "семьдесят "; break;
        case 8:cout << "восемьдесят "; break;
        case 9:cout << "девяносто "; break;
        }

        switch (n % 10) {
        case 1:cout << "один\n"; break;
        case 2:cout << "два\n"; break;
        case 3:cout << "три\n"; break;
        case 4:cout << "четыре\n"; break;
        case 5:cout << "пять\n"; break;
        case 6:cout << "шесть\n"; break;
        case 7:cout << "семь\n"; break;
        case 8:cout << "восемь\n"; break;
        case 9:cout << "девять\n"; break;
        default: cout << ""; break;
        }
    }
    system("pause");
    return 0;
}