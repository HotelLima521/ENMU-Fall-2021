#include <iostream>
#include <string>

using namespace std;
// Write a C++ program to calculate sale price of an item. The original price of an item is $645 marked 15% off. You should name this project as Lab2A.

double price(){
	int original = 645;
	double discount = 0.15;
	discount = original * discount;
	discount = original - discount;
	
	return discount;
}

int main(){

	cout << "15\% off of $645 is: " << '$' << price() << endl;

	return 0;
}
