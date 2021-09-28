#include <iostream>

int main(){
	//Variable declaration
	int total_num=5, i=0, element, sum=0, average;

	std::cout << "Enter 5 integer numbers and press enter\n-> ";
	//While loop to calculate the sum
	do{
		std::cin >> element;
		sum += element;
		i++;
	}
	while(i < total_num);
	average = sum/total_num; //calculation of average
	// Print out the result
	std::cout << "The average value is: " << average << std::endl;

	return 0;
}
