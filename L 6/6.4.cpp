// y = 3*x^6 - 6*x^2 -7

#include <iostream>
#include<cmath>
using namespace std;
int main()
{		
	double x,y;
	cout << "x: ";
	cin >> x;
	
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	
	cout << "y = " << y << endl;

	system("pause");
	return 0;
}

