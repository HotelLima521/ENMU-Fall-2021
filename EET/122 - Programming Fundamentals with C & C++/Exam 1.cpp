#include <cmath>
#include <iostream>


int test1_A(){

	int userIn;
	std::cout << "Please enter a temperature (F)\n-> ";
	std::cin >> userIn;

	if(userIn > 100){
		std::cout << "High temperature" << std::endl;
	}
	else if(userIn > 70){
		std::cout << "Moderate temperature" << std::endl;
	}
	else{
		std::cout << "Low temperature" << std::endl;
	}

	return 0;
}

int test1_B(){

	double length, height, area;
	std::cout << "Please input the length of the Hexagonal prism:\n-> ";
	std::cin >> length;
	std::cout << "Please input the height of the Hexagonal prism:\n-> ";
	std::cin >> height;
	area = (6*length*height)+(3*sqrt(3)*pow(length, 2));
	std::cout << "The area of the Hexagonal prism is: " << area << std::endl;

	return 0;
}

int main(){
	
	char userIn;
	std::cout << "Please input 1 for test1_A,\nPlease input 2 for test1_B\n-> ";
	std::cin >> userIn;
	switch(userIn){
		case '1':
			test1_A();
			break;
		case '2':
			test1_B();
			break;
		default:
			std::cout << "Wrong input, please enter 1 for test1_A, or 2 for test1_B." << std::endl;
			break;
	}

	return 0;
}
