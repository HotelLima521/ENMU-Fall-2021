#include <iostream>
#include <string>
#include <ctype.h>

/*
• This  program  asks  user  to  enter  string  which  contains following  characters: letters or digits, or whitespaces. The length of the string should be more than 8. You should use getLine() function to read string from keyboard.

• You need to extract each character, and check whether the character is a letter or digit or whitespace.

• You  can  access  character  at  a  specific  index  using .at() function.  Once  you  have extracted the character, you can test the extracted character using character test methods.

• You  can look  at  google/web  search to  check  the functions(isdigit,  isalpha, and isspace) available to test a character. Use the syntax properly in your code.

• Once  you  found  a  match,  simply  increase  the  value  of  the  counter  by  1.  You  need  3 separate counters to count number of letters, digits, and spaces.

• In this program, you do not need to worry about uppercase or lowercase letter.
 * 
*/

int main(){
	std::string userIn;
	int alpha, num, ws, spc;
	std::cout << "Enter a string 8 characters long\n-> ";
	std::cin >> userIn;
	if(std::getline(userIn) <= 9){
		//number counter
		if(isdigit){
			num++;
		}
		//alpha counter
		else if(std::isalpha(userIn)){
			alpha++;
		}
		//white spaces counter
		else if(std::isspace(userIn)){
			ws++;
		}
		else{
			spc++;
		}
	}
	else{
		std::cout << "Your input is too large, please limit to 8 characters or less." << std::endl;
	}

	std::cout << "The amount of Alphas in this string: " << alpha << endl;
	std::cout << "The amount of Numerics in this string: " << num << endl;
	std::cout << "The amount of White Spaces in this string: " << ws << endl;

	return 0;
}
