#include <iostream>
#include <string>

using namespace std;

int user_interaction(){
	
	int user_in;
	cout << "Please enter an integer to check whether it is odd or even.\n-> ";
	cin >> user_in;

	return user_in;
}

bool int_check(){

	int num_check = user_interaction();
	if(num_check % 2 == 0){
		cout << "Your integer is even." << endl;
	}
	else{
		cout << "Your integer is odd." << endl;
	}

	return true;
}

int main(){
//Write a program to check whether a given number is odd or even. This program asks user to enter a number and displays whether the entered number is odd or even. Assume that the number is a non-zero positive integer.
	int_check();

	return 0;
}
