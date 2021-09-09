#include <iostream>
#include <string>

using namespace std;

int user_out;
int user_in_0;
int user_in_1;
char user_in;
void problem_1(){
	cout << "Please enter a number between 0 and 50: \n" << '>';
	cin >> user_in_0;
}
void problem_2(){
	cout << "Please enter a number between -5 and 20: \n" << '>';
	cin >> user_in_1;
}
int arithmetic(){
	
	cout << "Would you like to add, subtract, multiply, divide, or modulate these numbers?\n+ = Add\n- = Subtract\n* = Multiply\n/ = Divide\n% = Modulus\n" << '>';
	cin >> user_in;

	if(user_in == '+'){
		user_out = user_in_0 + user_in_1;
		cout << "You have chosen to add the two numbers you have entered together. Here is the result: " << user_out << endl;
	}
	else if(user_in == '-'){
		user_out = user_in_0 - user_in_1;
		cout << "You have chosen to subtract the two numbers you have entered together. Here is the result: " << user_out << endl;
	}
	else if(user_in == '*'){
		user_out = user_in_0 * user_in_1;
		cout << "You have chosen to multiply the two numbers you have entered together. Here is the result: " << user_out << endl;
	}
	else if(user_in == '/'){
		do {
			cout << "Invalid Operation, you cannot divide by Zero." << endl;
			break;
		}
		while(user_in_1 == 0);
		user_out = user_in_0 / user_in_1;
		cout << "You have chosen to divide the two numbers you have entered together. Here is the result: " << user_out << endl;
	}
	else if(user_in == '%'){
		do {
			cout << "Invalid Operation, you cannot divide by Zero." << endl;
			exit;
		}
		while(user_in_1 == 0);
		user_out = user_in_0 % user_in_1;
		cout << "You have chosen to modulate the two numbers you have entered together. Here is the result: " << user_out << endl;
	}
	else{
		cout << "Error: Invalid Operation" << endl;
	}
	
	return 0;
}
int main(){

	string name = "Derek White";
	string course_name = "EET 122 Programing Fundamentals with C/C++";
	string university = "Eastern New Mexico University";
	string error_0 = "Error: the entered number is out of range";
	// How to loop back to a re-prompt?

	// First requirement in HW1
	cout << name << endl << course_name << endl << university << endl;
	// Second requirement in HW1

	// First Problem
	problem_1();
	if(user_in_0 < 0 != user_in_0 > 50){
		do{
			cout << error_0 << endl;
			problem_1();
			continue;
		}
	
		while(user_in_0 < 0 != user_in_0 > 50);
	}
	do{
		cout << "The number that you have entered is valid." << endl;
		break;
	}
	while(user_in_0 >= 0 && user_in_0 <= 50);
	
	// Second Problem
	problem_2();
	if(user_in_1 < -5 != user_in_1 > 20){
		
		do{
			cout << error_0 << endl;
			problem_2();
			continue;
		}
	
		while(user_in_1 < -5 != user_in_1 > 20);
	}
	do{
		cout << "The number that you have entered is valid." << endl;
		break;
	}
	while(user_in_1 >= -5 && user_in_1 <=20);

	// Arithmetic Portion:
	arithmetic();
	if(user_out < 0){
		cout << "The result is negative." << endl;
	}
	
	else if(user_out > 0){
		cout << "The result is positive." << endl;
	}
	else{
		cout << "The result is zero." << endl;
	}
	return 0;
}

