#include <iostream>

#define PI 3.14
double radius = 0;

void Print_descriptions(){
	std::cout << "This program will calculate the area and circumference of a circle\nYou can insert the value of the radius to check area and circumference" << std::endl;
}

void Cal_circumference(){
	double circum = 2*PI*radius;
	std::cout << circum;
}

void Cal_area(){
	double circum = PI*radius*radius;
	std::cout << circum;
}

int main(){
	
	std::cout << "Enter the value of the radius:\n-> ";
	std::cin >> radius;
	std::cout << "The Area is: "; Cal_area(); std::cout << std::endl;
	std::cout << "The Circumference is: "; Cal_circumference(); std::cout << std::endl;

	return 0;
}
