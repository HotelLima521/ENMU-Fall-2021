#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <cstring>

//using namespace std;
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
	// MAX_STRING_NAME must be 9 for the termination bit of the array (n-1 is the actual array length usable)
	#define MAX_STRING_NAME 9 
	
	// Var declarations
	int alpha = 0; 
        int num = 0; 
        int ws = 0;
        int i = 0;
	bool check_num = false; 
        bool check_alpha = false;
        bool check_ws = false;
	char userIn[MAX_STRING_NAME];
  	/* ###################
	 * #### EXECUTION ####
	 * # IT'S THE MEAT!  #
	 * ###################
	 */

	std::memset(userIn, 0, sizeof(userIn));
  	std::cout << "Enter a string 8 characters long -> ";
	std::cin.getline(userIn, MAX_STRING_NAME);
	while(i < MAX_STRING_NAME){
		check_num = isdigit(userIn[i]);
		check_alpha = isalpha(userIn[i]);
		check_ws = isspace(userIn[i]);
		if(check_num){
			num++;
			i++;
		}
		else if(check_alpha){
			alpha++;
			i++;
		}
		else if(check_ws){
			ws++;
			i++;
		}
		else{
			i++;
		}
	}
	// Btw, can we please go over memory garbage at some point, Dr. S? This messed with me writing this lab quite a bit
	std::cout << std::endl;
	std::cout << "The amount of Alphas in this string: " << alpha << std::endl;
	std::cout << "The amount of Numerics in this string: " << num << std::endl;
	std::cout << "The amount of White Spaces in this string: " << ws << std::endl;

	return 0;
}
