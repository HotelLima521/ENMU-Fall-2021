#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float cone(){
	float r;
	float h;
	const float pi = 3.14;
	
	cout << "Please input the radius for the cone:\n-> ";
	cin >> r;
	cout << "Please input the height for the cone:\n-> ";
	cin >> h;

	return pi*r*(r+sqrt(pow(r, 2)+pow(h, 2)));

}


int main(){
//Write a C++ code to calculate the surface area of a cone. This program reads input(radius and height)from the keyboard and prints the area of the cone on the screen
	
	float surface_area = cone();
	cout << "The surface area of the cone is: " << surface_area << endl;

	return 0;
}
