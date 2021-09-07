#include <iostream>
#include <string>

using namespace std;

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
int main(){

	string name = "Derek White";
	string course_name = "EET 122 Programing Fundamentals with C/C++";
	string university = "Eastern New Mexico University";
	string error_0 = "Error: the entered number is out of range";
	// How to loop back to a re-prompt?

	// First requirement in HW1
	cout << name << endl << course_name << endl << university << endl;
	// Second requirement in HW1

	problem_1();
	if(user_in_0 < 0){
		cout << error_0 << endl;
		// Need to insert a prompt back to the loop here
		problem_1();
	}
	else if(user_in_0 > 50){
		cout << error_0 << endl;
		// And Here
		problem_1();
	}
	else if(user_in_0 <= 50 && user_in_0 >= 0){
		cout << "The number that you have entered is valid." << endl;
	}
	else{
		// This is mostly for if a user was to enter a float when they weren't supposed to.
		cout << error_0 << endl;
		// And here
		problem_1();
	}

	problem_2();
	if(user_in < -5){
		cout << error_0 << endl;
		// And here
		problem_2();
	}
	else if(user_in_1 > 20){
		cout << error_0 << endl;
		// And here
		problem_2();
	}
	else if(user_in_1 <= 20 && user_in >= -5){
		cout << "The number that you have entered is valid." << endl;
	}
	else{
		// This is mostly for if a user was to enter a float when they weren't supposed to.
		cout << error_0 << endl;
		// And here
		problem_2();
	}
	
	cout << "Would you like to add, subtract, multiply, divide, or modulate these numbers?\n+ = Add\n- = Subtract\n* = Multiply\n/ = Divide\n% = Modulus\n" << '>';
	cin >> user_in;

	if(user_in == '+'){
		cout << "You have chosen to add the two numbers you have entered together. Here is the result: " << user_in_0 + user_in_1 << endl;
	}
	else if(user_in == '-'){
		cout << "You have chosen to subtact the two numbers you have entered together. Here is the result: " << user_in_0 - user_in_1 << endl;
	}
	else if(user_in == '*'){
		cout << "You have chosen to multiply the two numbers you have entered together. Here is the result: " << user_in_0 * user_in_1 << endl;
	}
	else if(user_in == '/'){
		cout << "You have chosen to divide the two numbers you have entered together. Here is the result: " << user_in_0 / user_in_1 << endl;
	}
	else if(user_in == '%'){
		cout << "You have chosen to modulate the two numbers you have entered together. Here is the result: " << user_in_0 % user_in_1 << endl;
	}
	else{
		cout << "Error: Invalid Operation" << endl;
	}



	return 0;
}

