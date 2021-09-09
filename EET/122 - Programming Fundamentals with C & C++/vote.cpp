#include <iostream>
#include <string>


using namespace std;

// write  aprogram to check whether a person is eligible to vote. If the person's age is greater than or equal to 18, then the person is eligible to vote. If the person's age is less than 18, then the person is not eligible to vote.

int user(){
	int user_in;
	cout << "Please enter your age: \n> ";
	cin >> user_in;
	
	return user_in;
}

bool age_check(){
	if(user() >= 18){
		cout << "Person is eligible to vote." << endl;
		return true;
	}
	else{
		cout << "Person is ineligible to vote." << endl;
		return false;
	}
}
int main(){

	age_check();


	return 0;







}
