#include <iostream>

int main(){
	
	int avg, integer_num, integer_input, count, sum, largest, smallest, range;
	std::cout << "Please enter the amount of integers you would like to calculate\n-> ";
	std::cin >> integer_num;
	std::cout << "Please enter an integer\n-> ";
	std::cin >> integer_input;
	
	largest = smallest = integer_input;
	for(count=1; count < integer_num; ++count){
		std::cout << "Please enter an integer\n-> ";
		std::cin >> integer_input;
		sum += integer_input;
		if(integer_input > largest){
			largest = integer_input;
		}
		else if(integer_input < smallest){
			smallest = integer_input;
		}
	}
	
	avg = sum/integer_num;
	range = largest-smallest;
	//std::cout << "Largest Smallest" << largest << ' ' << smallest << std::endl;
	std::cout << "The Sum is: " << sum << std::endl;
	std::cout << "The Average is: " << avg << std::endl;
	std::cout << "The Range is: " << range << std::endl;

	return 0;
}
