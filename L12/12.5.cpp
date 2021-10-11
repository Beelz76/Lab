/*В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, 
  белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, 
  собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».*/
#include <iostream> 
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
  
    int n;
    cin >> n;
    if (n < 1984) {
        cout << "начало цикла - 1984\n"; 
    }
    else {
        switch (n % 10) {
        case 0:
        case 1:cout << "год бел"; break;
        case 2:
        case 3:cout << "год черн"; break;
        case 4:
        case 5:cout << "год зелен"; break;
        case 6:
        case 7:cout << "год красн"; break;
        case 8:
        case 9:cout << "год желт"; break;
        }

        switch ((n - 1984) % 12) {
        case 0:cout << "ой крысы\n"; break;
        case 1:cout << "ой коровы\n"; break;
        case 2:cout << "ого тигра\n"; break;
        case 3:cout << "ого зайца\n"; break;
        case 4:cout << "ого дракона\n"; break;
        case 5:cout << "ой змеи\n"; break;
        case 6:cout << "ой лошади\n"; break;
        case 7:cout << "ой овцы\n"; break;
        case 8:cout << "ой обезьяны\n"; break;
        case 9:cout << "ой курицы\n"; break;
        case 10:cout << "ой собаки\n"; break;
        case 11:cout << "ой свиньи\n"; break;
        }
    }
  
    
    system("pause");
    return 0;
}

