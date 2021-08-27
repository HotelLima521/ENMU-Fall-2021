#include <iostream>

using namespace std;

// Write a program to print total price of an item up two decimal points. The sale price of the item is $545.00, and th sales tax is 5%

int main()
{
	int sales_price = 545;
	float sales_tax = 0.05;
	float total_price = sales_price * sales_tax; // This will print a 27.25
	total_price = total_price + sales_price; //This gives us 572.25

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "The Total Price is: " << total_price << endl;
}


