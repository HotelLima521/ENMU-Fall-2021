#include <iostream>

using namespace std;

int main()
{
	// Utilizing floats since double floating point
	// precision is not necessary in this use case and
	// is an unecessary allocation of memory for anything
	// larger than a conventional fp.
	float base = 4.5;
	float height = 10.5;
	float Area;

	// Area = 1/2 * base * height
	//
	Area = .5 * base * height;

	cout << "The area of the triangle is: " << Area << "cm^2." << endl;

	return 0;

}
