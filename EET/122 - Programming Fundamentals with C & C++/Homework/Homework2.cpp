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
	// Top is less than and equal to 15, highest range of input for top
	// top is odd
		
	if((a <= 15 && a % 2 != 0) && (b <=17 && a < b && b % 2 != 0)){
		for(int i = a; i <= b; i+=2){
			for(int j = 1; j <= (b-i); j+=2){
				std::cout << ws;
			}
			for(int j = 0; j < i; j++){
				std::cout << print;
			}
			std::cout << std::endl;
		}
	}
	// Error statements
	else if(a % 2 == 0){
		std::cout << "Your top input is even, must be odd." << std::endl;
	}
	else if(b % 2 == 0){
		std::cout << "Your bottom input is even, must be odd." << std::endl;
	}
	else if(a > 15){
		std::cout << "Your top input is greater than 15, must be between 1 and 15." << std::endl;
	}
	else if(b > 17 || b < 3){
		std::cout << "Your bottom input is greater than 17, or less than 3, must be between 3 and 17." << std::endl;
	}
	else{
		std::cout << "Uh oh!\nLooks like you tried to enter in a number smaller than the top of the trapezoid. Technically this will still work, but not what we are looking for :)" << std::endl;
	}

	
	return 0;
}
