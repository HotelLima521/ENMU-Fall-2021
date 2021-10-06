#include <cmath>
#include <iostream>
#include <string>

int problem1(){
		/* Write a program to calculate the volume of a cylinder, taki ng the input from the user. Need Radius and Height.*/

	double radius, height;

	std::cout << "Let's calculate the volume of a cylinder!\n";
	std::cout << "Please enter the radius:\n-> ";
	std::cin >> radius;
	std::cout << "Please enter the height:\n-> ";
	std::cin >> height;
	double pi = 3.14;
	double volume = pi*pow(radius, 2)*height;
	std::cout << "The volume of the cylinder is: " << volume << std::endl;
	
	return 0;
}

int problem2(){
	std::string nameFirst, nameLast, nameFull;
	std::cout << "Please enter your first name:\n-> ";
	std::cin >> nameFirst;
	std::cout << "Please enter your last name:\n-> ";
	std::cin >> nameLast;
	nameFull = nameLast+' '+nameFirst;
	std::cout << nameFull<< std::endl;
	std::cout << "Length of the concatenated string: " << nameFull.length() << std::endl;

	return 0;
}

int main(){
	
	char userIn;
	std::cout << "Please press 1 for Problem 1, or 2 for Problem 2.\n-> ";
	
	std::cin >> userIn;

	switch(userIn){
		case '1':
			problem1();
			break;
		case '2':
			problem2();
			break;
		default:
			std::cout << "Wrong input, please enter 1 for Problem 1, or 2 for Problem 2." << std::endl;
			break;
	}

	return 0;
}
