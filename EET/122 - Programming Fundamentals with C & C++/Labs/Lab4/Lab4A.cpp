#include <iostream>

/*
 * Write a C++ code to calculate the salesperson's bonus considering the following criteria:
 *
 * If the monthly earning is greater than $9k, the bonus will be 7.8% of the monthly sales.
 *
 * If the Monthly earning is greater than $4.2k, but less than or equal to $9k, the bonus will be 6.2% of monthly sales.
 *
 * If the monthly earning is less than or equal to $4,200, the bonus will be 5.5% of the monthly sales.
 * 
 * Prompt for and read in salesperson's monthly earnings which is a floating-point number.
 *
 * You can use multi-way if-else statements to implement multiple condition.
 *
 * Print out the prompt for read in and bonus pay with a meaningful message.
 */

double earning;

double earning_round(){
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(2);

	return earning;
}

double earning_chk(){
	if(earning >= 9000){
		earning += earning * 0.078;
	}
	else if(earning >= 4200 && earning < 9000){
		earning += earning * 0.062;
	}
	else{
		earning += earning * 0.055;
	}
	earning_round();
	return earning;
}

int main(){
	std::cout << "PLease enter the monthly earnings:\n-> ";
	std::cin >> earning;
	std::cout << "Your bonus pay will be: " << '$' << earning_chk() << '.' << std::endl;
	return 0;
}
