#include <iostream>

int main(){
	int a, b;
	char print;
	char ws = ' ';
	std::cout << "Please enter an integer between 1 and 15:\n-> ";
	std::cin >> a;
	std::cout << "Please enter a second integer between 3 and 17:\n-> ";
	std::cin >> b;
	std::cout << "Please enter in the character you would like your trapezoid to be drawn in:\n-> ";
	std::cin >> print;

	// Initial line from user input
	// LOGIC:
	// Top is less tan and equal to 15, highest range of input for top
	// top is odd
	if(a <= 15 && a % 2 != 0){
		for(int i = 0; i <= b-a/2; i++){
			std::cout << ws;
		}
		for(int i = 0; i < a; i++){
			std::cout << print;
		}
		std::cout << std::endl;
	}
	// Filling the gap
	// Logic:
	// Fill is equal to top line +2
	// Fill is equal less than bottom line
	// Fill = Fill + 2
	for(int i = a+2; i < b; i +=2){
		for(int j = 0; j < b; j++){
			std::cout << print;
		}
		std::cout << std::endl;
	}
	// Final line from user input
	// LOGIC:
	// Bottom is less than and equal to 17, which is highest range of input for bottom
	// bottom is odd
	// bottom is greater than a
	if(b <= 17 && b % 2 != 0 && b > a){
		for(int i = 0; i <=b-a/2; i++){
			std::cout << ws;
		}
		for(int i = 0; i < b; i++){
			std::cout << print;
		}
		std::cout << std::endl;
	}
	else{
		std::cout << "Uh oh!\nLooks like you tried to enter in a number smaller than the top of the trapezoid. Technically this will still work, but not what we are looking for :)" << std::endl;
	}
	return 0;
}
