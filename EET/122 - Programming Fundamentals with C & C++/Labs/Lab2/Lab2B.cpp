#include <iostream>
#include <string>

using namespace std;

// Write a C++ program to concatenate two strings (first name and last    name) entered by the user. Program will print concatenated string as well as length of the concatenated string. Save this project as Lab2B.


string user_in(){
	string name_first;
	string name_last;
	string name_full;
	cout << "Please enter your first name:\n-> ";
	cin >> name_first;
	cout << "Please enter your last name:\n-> ";
	cin >> name_last;
	name_full = name_last + ", " + name_first;

	return name_full;
}

int main(){

	string name_full = user_in();
	int user_in_length = (name_full.length()) - 2; // Subtracting two here in compensate for the two characters I added in to make the name look nice and pretty.
	cout << "The concatenated string is:\n" << name_full << "\nThe length of the concatenated string is: " << user_in_length << endl;

	return 0;
}
