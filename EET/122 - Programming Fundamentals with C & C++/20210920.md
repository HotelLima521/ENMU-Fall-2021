# Nested Statements

Sometimes it is necessary to include an if statement inside another if statement. This is referred as a nested if statement.

```cpp
if (condition){
	if(condition){
		//statements
	}
}
else{
	//statements
}
```

```cpp
#include <iostream>
#include <string>

int main(){

int num;
std::cout << "Enter an Integer: ";
std::cin >> num;

	if(num!=0){
		if((num%2)==0){
			std::cout << "The entered number is even";
		}
		else{
			std::cout << "The entered number is odd";
		}
	}
	else{
		std::cout << "The entered number is zero";
	}

	return 0;
}
```

## The Switch Statement

Statements used to construct multi-way branches. The choice of which branch to execute is determined by a controlling expressio n given in parenthesis after the keyword switch. When the switch statement is executed, the controlling expression

```cpp
switch (expression){
	case constant_1:
	//statements
	break;
	
	case constant_2:
	//statements
	break;

	case constant_n:
	//statements
	break;
	
	default:
		//statements to be executed if no values match
}
```

```cpp
#include <iostream>
#include <string>

int main(){
	int number = 1;
	switch(number){
		case 1:
			std::cout << "ONE";
			break;
		
		case 2:
			std::cout << "TWO";
			break;

		case 3:
			std::cout << "THREE";
			break;

		default:
			cout << "INVALID COMMAND";
			break;
	}

	return 0;
}
```

## For Loop
Like while loop, for loop executes block of code/statement repeatedly until a specific goal is attained. The repetition will continue as long as the condition remains true.

```cpp
for (initialization; condition; update){
	//statements
}
```

```cpp
#include <iostream>

int main(){
	int counter;
	int fact = 1;
	for(counter = 1; counter <= 3; counter++){
		fact *= counter;
	}
	std::cout << "The factorial of 3 is: " << fact;

	return 0;
}
```
