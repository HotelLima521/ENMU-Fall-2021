# Array Declaration

```cpp
double Values[6];
//data type, name of variable, size
```

## Array Declaration (With initial values)
```cpp
double Values[6] = {30, 40, 50, 60, 80, 90};
```

## Access Array Element

To access a value from an array, you need to specify the index inside the square bracket [] after array variable.

```cpp
double Values[6] = {30,40,50,60,80,90};
cout << Values[2] << endl;
```

A program to print specified element of a given array named `Values` that contain the following numbers: 30, 40, 50, 60, 80, and 90.

```cpp
#include <iostream>

int main(){
	double Values[] = {30, 40, 50, 60, 80, 90};
	std::cout << Values[2] << std::endl;
	std::cout << Values[3] << std::endl;
	std::cout << Values[5] << std::endl;
	return 0;
}
```

## Assign New Value to an array
- To assign a value to a specified slot of the array, use the assignment operator.
- You  need to to specifiy the index on the square bracker [] after array variable.

Consider the array from the previous example:
```cpp
double Values[6] = {30, 40, 50, 60, 80, 90};
```
say you want to replace 80 in [4] with 5.

```cpp
Values[4]=5;
```

```cpp
double Values[6] = {30, 40, 50, 60, 5, 90};
```

## Bounds error
An array index must be at least zero and less than the size of the array. Attempting to access an element whose index is not within the valid range is called bounds error.

## Visit all array elements
To visit all elements of an array, use a variable for the index. The expression [i] yields each element in turn.

A program to print all the elements of a given array named `Values` that contain the following numbers: 30, 40, 50, 60, 80, 90.

```cpp
#include <iostream>

int main(){
	double values[6] = {30, 40, 50, 60, 80, 90};
	for(int = 0; i < 6; i++){
		std::cout << Values[i] << std::endl;
	}

	return 0;
}
```

A program to fill an array (length of 5) with squares of numbers (0, 1, 4, 9, 16). Element with index 0 contains 0^2, element with index 1 contains 1^2, and so on.

```cpp
#include <iostream>

int main(){
	int number = 5;
	int values[number];
	for(int i = 0; i < number; i++){
		values[i] = i*i;
		std::cout << values[i] << ' ';
	}

	return 0;
}
```

```cpp
#include <iostream>

int main(){
	double total = 0, average;
	int i, size = 5;
	double values[size] = {20, 40, 60, 30, 100};
	for(i = 0; i < size; i++){
		total += values[i];
	}
	average = total/size;
	std::cout << "The sum is = " << total << std::endl;
	std::cout << "The average is = " << average;

	return 0;
}
```
