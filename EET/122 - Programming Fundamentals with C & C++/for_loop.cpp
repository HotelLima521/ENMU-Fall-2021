// What is the output of the following program (when embedded in a complete program?
#include <iostream>

int main(){

	for (int count = 1; count < 5; count++){
		std::cout << (2*count) << " ";
/*
		2*1 = 2
		2*2 = 4
		2*3 = 6
		2*4 = 8
		2*5 False
*/
	}
	
	return 0;
}
