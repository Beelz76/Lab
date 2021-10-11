/*Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного 
  количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».*/
#include <iostream> 
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
  
    int N;
    cin >> N;

    if (N / 10 % 10 == 1) {
        switch (N % 10) {
        case 0:cout << "десять "; break;
        case 1:cout << "одиннадцать "; break;
        case 2:cout << "двенадцать "; break;
        case 3:cout << "тринадцать "; break;
        case 4:cout << "четырнадцать "; break;
        case 5:cout << "пятнадцать "; break;
        case 6:cout << "шестнадцать "; break;
        case 7:cout << "семнадцать "; break;
        case 8:cout << "восемнадцать "; break;
        case 9:cout << "девятнадцать "; break;
        }
    }

    if (N / 10 % 10 != 1) {
        switch (N / 10 % 10) {
        case 2:cout << "двадцать "; break;
        case 3:cout << "тридцать "; break;
        case 4:cout << "сорок "; break;
        }
        switch (N % 10) {
        case 1:cout << "одно "; break;
        case 2:cout << "два "; break;
        case 3:cout << "три "; break;
        case 4:cout << "четыре "; break;
        case 5:cout << "пять "; break;
        case 6:cout << "шесть "; break;
        case 7:cout << "семь "; break;
        case 8:cout << "восемь "; break;
        case 9:cout << "девять "; break;
        }
    }
   

    if (N / 10 != 1 && N % 10 == 1) {
        cout << "учебное задание\n"; 
    }
    else {
        cout << "учебных заданий\n";
    }
    system("pause");
    return 0;
}

