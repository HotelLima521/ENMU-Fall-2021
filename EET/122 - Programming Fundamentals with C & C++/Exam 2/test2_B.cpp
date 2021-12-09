#include <iostream>
#include <string>

int main(){
	int a = 0, e = 0, i = 0, j = 0;
	std::string userIn;
	std::cout << "Please enter a string\n-> ";
	std::getline(std::cin, userIn);
	int str = userIn.length();
	for(int j = 0; j <= str; j++){
		if(userIn[j] == 'a'){
			a++;
		}
		else if(userIn[j] == 'e'){
			e++;
		}
		else if(userIn[j] == 'i'){
			i++;
		}
	}
	std::cout << "Number of 'a' on the line: " << a << std::endl;
	std::cout << "Number of 'e' on the line: " << e << std::endl;
	std::cout << "Number of 'i' on the line: " << i << std::endl;

	return 0;
}
