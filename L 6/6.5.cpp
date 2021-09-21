// y = 4*(x-3)^6 - 7(x-3)^3 +2

#include <iostream>
#include<cmath>
using namespace std;
int main()
{		
	double x,y;
	cout << "x: ";
	cin >> x;
	
	y = 4*pow(x-3,6) - 7*pow(x-3,3) +2;
	
	cout << "y = " << y << endl;

	system("pause");
	return 0;
}

