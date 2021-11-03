#include <iostream>

/* Write a program to ask a user to enter the grade points of six students. This program will count the number of students who passed the exam and copy the passing grades into an array to store passing grades. If a student’s grade is greater than or equal to 60, it will be considered a passing grade. The user should enter a grade in the range of 0 to 100. */

// Declare an array named `marks` fo size 6 to store grade points of 6 students.
//
// Declare another array named `pass` to store passing grades.
//
// Using for loop, you can access each element of the `marks` array. You can use if statements to test each element (grade points) of the `marks` array. If the grade is equal to or greater than 60, copy the grade point to the `pass` array.
//
// Now prints the element of the `pass` array with a suitable message. You can use another for loop to print each elements of the `pass` array. You also need to print the number of students who have passed.

int main(){

	int i = 0, marks[6] = {}, pass[6] = {};
	
	std::cout << "Enter six student grades: ";
	for(i = 0; i < 6; i++){
		std::cin >> marks[i];
	}

	for(i = 0; i < 6; i++){
		if(marks[i] >= 60){
			pass[i] = marks[i];
		}
	}

	std::cout << "Student scores that have passed: ";
	for(i = 0; i < 6; i++){
		if(pass[i] >= 60){
			std::cout << pass[i] << ' ';
		}
	}
	
	return 0;
}
