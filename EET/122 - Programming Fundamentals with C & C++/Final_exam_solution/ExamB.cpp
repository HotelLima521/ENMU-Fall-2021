#include <bits/stdc++.h>
#include <cctype>
#include <cstring>
#include <iostream>
#include <string>

/*
 * Write a program to read a string from the keyboard and display the type of character at index 5: This program also counts number of words on this string
 * 	
 * 	- This program asks the user to enter string which contains a mixture of letters, digits, and whitepsaces. The string can have multiple words, each word separated by a single space. The length of the string should be more than 8.
 * 	- You can Test the extracter character using character test functions
 * 	- In this porgram you do not need to worry about uppercase or lowercase letters
 */

/*void charChk(char userIn[50]){
	int alpha = 0;
	int num = 0;
	int ws = 0;
	int i = 0;
	//int words = 0;
	bool check_num = false;
	bool check_alpha = false;
	bool check_ws = false;
	//bool check_words = false;
	// BIG PAPA
	std::memset(userIn, 0, sizeof(ui));
	while(i <= userIn.max_size()){
		check_num = isdigit(userIn[i]);
		check_alpha = isalpha(userIn]);
		check_ws = isspace(userIn[i]);
		//check_words =
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
	//std::cout << std::endl;
	std::cout << "The amount of Alphas in this string: " << alpha << std::endl;
	std::cout << "The amount of Numerics in this string: " << num << std::endl;
	std::cout << "The amount of White Spaces in this string: " << ws << std::endl;

}*/
int main(){
	// Minimum String Name
	#define MIN_STRING_NAME 9
	//Var Declarations
	char userIn[50];

	// Da big spaghet and meat balls
	std::cout << "Enter a string with a mixture of letters, digits, and white spaces" << std::endl;
	std::getline(userIn, MIN_STRING_NAME); 
	if(userIn < MIN_STRING_NAME){
		std::cout << "Input too small, must be above 8 chars" << std::endl;
	}
	else{
		//charChk(userIn[50]);
		int alpha = 0;    
        int num = 0;    
        int ws = 0;    
        int i = 0;    
        //int words = 0;    
        bool check_num = false;    
        bool check_alpha = false;    
        bool check_ws = false;    
        //bool check_words = false;    
        // BIG PAPA    
        std::memset(userIn, 0, sizeof(userIn));    
        while(i <= userIn.max_size()){    
                check_num = isdigit(userIn[i]);    
                check_alpha = isalpha(userIn[i]);    
                check_ws = isspace(userIn[i]);    
                //check_words =    
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
        //std::cout << std::endl;    
        std::cout << "The amount of Alphas in this string: " << alpha << std::endl;    
        std::cout << "The amount of Numerics in this string: " << num << std::endl;    
        std::cout << "The amount of White Spaces in this string: " << ws << std::endl
	}

	return 0;
}
