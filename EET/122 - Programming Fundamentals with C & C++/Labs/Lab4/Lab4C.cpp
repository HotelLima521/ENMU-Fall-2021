#include <iostream>

int seven_finder(){
	int i = 200;
	int i_append = 0;

	while(i < 250){
		if(i % 7 == 0){
			std::cout << i << ' ';
			i_append += i;

		}
		i++;
	}
	
	std::cout << std::endl;
	std::cout << "The sum of these numbers is: " << i_append << std::endl;
	return 0;
}

int main(){
	
	std::cout << "Here is a list of all numbers between 200 and 250, divisible by 7: " << std::endl;
	seven_finder();

	return 0;
}
