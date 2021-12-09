# Sum and Average Value

A program to Sum an Average from a sequence of integer numbers entered by user.

```cpp
#include <iostream>

int main(){
	int counter = 0, input, sum = 0, average;
	std::cout << "Enter sequence of integer values: ";
	while(std::cin >> input){
		sum += input;
		counter++;
	}

	average = sum / counter;
	std::cout << "Sum: " << sum << "Average: " << average;
}
```

## Finding the largest number
- To compute the largest value in a sequence, keep a variable that stores the largest element that you have encountered, and update it when you find a larger one.
- Suppose you want to find the largest of the following numbers: 20 80 55 98 65

- A program to find the largest number from a sequence of integer number entered by the user.

```cpp
#include <iostream>

int main(){
	std::cout << "Enter sequence of integer values: ";
	int largest;
	std::cin >> largest;
	int input;
	while(std::cin >> input){
		if(input > largest){
			largest = input;
		}
	}
	std::cout << "The largest value is: " << largest;
}
```

**If a variable is equal to another variable, the variable on the right overwrites the variable on the left.**

```cpp
for (i=1; i<=3; i++){ //Outer for loop
	for(j=1; j<=4; j++){ //Inner for loop
		std::cout << '*';
	}
	std::cout<<std::endl;
}
```
