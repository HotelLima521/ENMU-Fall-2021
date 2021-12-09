#include <iostream>

int main(){
	
	int sum = 0;
	std::cout << "List of numbers divisible by 4 and 5: ";
	for(int i = 1; i <= 50; i++){
		if(i % 4 == 0){
			sum += i;
			std::cout << i << ' ';
		}
		else if(i % 5 == 0){
			sum += i;
			std::cout << i << ' ';
		}
	}
	std::cout << "\nThe sum is: " << sum << std::endl;
	return 0;
}
