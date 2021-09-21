//Поменять местми содержимое переменных A и B и вывести новые значения A и B

#include <iostream>
using namespace std;
int main()
{		
	double A, B, ss;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;

	ss = A;
	A = B;
	B = ss;

	cout << "A= " << A << endl;
	cout << "B= " << B << endl;

	system("pause");
	return 0;
}

