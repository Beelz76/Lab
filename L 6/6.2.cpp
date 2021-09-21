/* Даны переменные A,B,C. Изменить их значения, переместив содержимое A в B,
  B - в C, C - в A, и вывести новые значения переменных A,B,C. */

#include <iostream>
using namespace std;
int main()
{		
	double A, B,C, ss;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;

	ss = A + B + C;
	A = ss - C; 
	B = ss - B - C; 
	C = ss - A - B;
	cout << "A= " << A << endl;
	cout << "B= " << B << endl;
	cout << "C= " << C << endl;

	system("pause");
	return 0;
}

