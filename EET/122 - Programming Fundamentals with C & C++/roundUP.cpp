#include <iostream>

using namespace std;
// Write a C++ Program to print the price value 1.21596 up to 2 Decimal places

int main()
{
	float price = 1.21596;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Price is: " << price << endl;
	return 0;

}
