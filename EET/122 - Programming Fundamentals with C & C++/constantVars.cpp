#include <iostream>
#include <cmath>

using namespace std;

int main() {
//	const int EXAMPLE;
// e.g.:
//
	const double PI = 3.14;

/* Write a program to print the area of a circle where the radius of the circle is 3. The equation of the circle is A = pi * r^2 */

	int r = 3;

	double A = PI*pow(r, 2);
	cout << "The area of the circle is: " << A << endl;

	return 0;
}
