#include <iostream>
#include <string>
/*
 * Write a Program that does the following:
 * - Declare the following Variables:
 *   	- A string variable to store the full name of the company
 *   	- An integer to stroe the total sales
 *   	- An integer to store the total expenditure
 *   	- A double to store the tax to be paid
 *   	- A constant double intialized with value 15% to store the tax rate.
 *   - Prompt the user to enter the full name of the company
 *   - Prompt the user to enter the total sales and the total expenditure.
 *   - Calculate the tax to be paid by multiplying the profit with the constant you've created
 *   		tax=(sales-expenditure)*tax_rate
 *   	- Assume total sales is always higher than expenditure
 *   - Display the taxes paid by the comapny with 2 digits after decimal points
 */

double tax(int s, int e, double t){
	// Now Dr. Sayeed, when you say "Assume Total sales is always higher than expenditure", I'm under the
	// Assumption that you are inferring NOT to implement it within the src, else I would put an if statement
	// here for that.
	double taxDue = (s-e)*t;
	
	return taxDue;
}

int main(){

	// Var declarations
	const double TAX_RATE = 0.15;
	int totalSales;
	int totalExpenditures;
	std::string companyName;
	
	// Da meat n' Potaties
	std::cout << "Please enter full name of company" << std::endl;
	std::getline(std::cin, companyName);
	std::cout << "Please enter total sales" << std::endl;
	std::cin >> totalSales;
	std::cout << "Please enter total expenditures" << std::endl;
	std::cin >> totalExpenditures;
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(2);
	std::cout << "Taxes due for " << companyName << ": $" << tax(totalSales, totalExpenditures, TAX_RATE) << std::endl;

	return 0;
}
