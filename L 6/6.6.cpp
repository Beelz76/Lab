// A^8

#include <iostream>
using namespace std;
int main()
{		
	int A,b;

	cout << "A: ";
	cin >> A;

	b = A * A;
	A = b * b;
	A = A * A;

	cout << "A^8 = " << A << endl;

	
	

	system("pause");
	return 0;
}
