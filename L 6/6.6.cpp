// A^8

#include <iostream>
using namespace std;
int main()
{		
	int A,b;

	cout << "A: ";
	cin >> A;

	b = A * A; //^2
	A = b * b; //^4
	A = A * A; //^8

	cout << "A^8 = " << A << endl;

	
	

	system("pause");
	return 0;
}
