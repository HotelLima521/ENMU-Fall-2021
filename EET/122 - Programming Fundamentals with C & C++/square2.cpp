#include <iostream>
#include <math.h>

using namespace std;

/* Write a program to ask user to enter the length of the side and print the area of the square A = a^2, where a is the length of each side. */
int main()
{

	int a, area;

	cout << "Enter the value of the side: ";
	cin >> a;

	area = pow(a, 2);

	cout << "The area is: " << area << endl;

	return 0;
}
