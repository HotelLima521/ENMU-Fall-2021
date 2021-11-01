#include <iostream>


/* A 1-D array named Grades stored the following grade points for 5 students: 75, 85, 80,90, and 70, respectively. Write a program to print the index and element of the following 1-D array in reverse order.
 */

int main(){

	int i, j, temp1, temp2;
	int Grades[5] = {75, 85, 80, 90, 70};
	/*for(i = 0; i < 5; i++){
		std::cout << Grades[i] << ' ';
	}*/
	std::cout << std::endl;
	for(i = 4; i >= 0; i--){
		std::cout << Grades[i] << ' ';
	}
	std::cout << std::endl;

	return 0;
}
