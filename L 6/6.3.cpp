// A -> C, C -> B, B -> A

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
	A = ss - A - C; 
	B = ss - C; 
	C = ss - A - B;

	cout << "A= " << A << endl;
	cout << "B= " << B << endl;
	cout << "C= " << C << endl;

	system("pause");
	return 0;
}

