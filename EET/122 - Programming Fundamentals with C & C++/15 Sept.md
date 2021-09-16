# while loop

What is the output of the following program (when embedded in a complete program?)

```cpp
int i = 0;
int sum = 0;
while (sum < 3){
i++;
sum = sum + i;
cout << i << sum << endl;
}
```

# do while loop

- Sometimes you want to execute the body of the loop at least once and perform the loop test after the body is executed.
- In the do while loop, the body of the do loop is executed first, then the condition is tested.

```cpp

do{
	//statements
}
while(condition);
```

```cpp
do{
	sum = sum + counter;
	counter++;
}
while(counter <= 2);
```

A program to ask user to enter a value between 0 to 100 (Inclusively), program will keep asking if the user enter value outside the range 0 to 100.

```cpp

#include <iostream>

int main(){
	int value;
	do{
		std::cout << "Enter an integer between 0 to 100: ";
		std::cin >> value;
	}
	while (value <= 0 || value >= 100);
	
	std::cout << "The valid input value is: " << value;

	return 0;
}
```

# Multiway if-else statement

- If-else statement is a two way branch. It allows a program to choose one of the two possible actions.
- You can implement multiway branches by nesting if-else statements. Your program can choose between more than two (multiple) alternative actions.

```cpp
if(condition){
	//statements
}
else if(condition){
	//statements
}
else if(condition){
	//statements
}
// ...
else{
	//statements
}
```
