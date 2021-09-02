#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a = 10, b = 5;
	double y;
	a = pow(a, 2);
	b = pow(b, 2);
	y = sqrt(a+b);
	cout << "The value of y is: " << y << endl;

	return 0;
}
