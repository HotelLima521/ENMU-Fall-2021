# Swapping Elements
We'd like to swap values[1] and values[3]:

`double values[] = {20, 40, 90, 30, 70};`

```cpp
#include <iostream>

int main(){
	int size = 5;
	int values[size] = {20, 40, 90, 30, 70};
	int temp = values[1];
	values[1] = values[3];
	values[3] = temp;
	for(int i = 0; i < size; i++){
		std::cout << values[i] << ' ' << std::endl;
	}
}
```

# Reading Input
If you know how many inputs the user will supply, it is simple to place them into an array.

```cpp
#include <iostream>

int main(){
	int NUMBER_OF_INPUTS=4;
	double inputs [NUMBER_OF_INPUTS];
	std::cout << "Enter the values: " << std::endl;
	for(int i = 0; i < NUMBER_OF_INPUTS; i++){
		std::cin >> inputs[i];
	}
	for(int i = 0; i < NUMBER_OF_INPUTS; i++){
		std::cout << inputs[i]; << ' ';
	}
}
```

# Using arrays with Functions
You can use both array indexed variables and entire arrays as arguments to the functions

Indexed variable as Function arguments: An indexed variable can be an argument to function in exactly the same way that any variable can be an argument

Entire array as Function arguments: A function can have a formal parameter for an entire array so that when the function is called, the argument is plugged in for this formal parameter is an entire array.

Example: A program to calculate square of the element in a given array at index position 2 (Using arrays with functions).

```cpp
double inputs[4] = {30, 40, 50, 30};
```

```cpp
double square(double values){
	double total = values*values;
	return total;
}

int main(){
	int size = 4;
	double numbers[size] = {5, 10, 15, 20};
	double result = square(numbers[2]);
	std::cout << "The square of the element is: " << result << std::endl;
}
```
