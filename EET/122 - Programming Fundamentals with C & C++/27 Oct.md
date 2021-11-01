A program to compute column totals:

This program calculates all the elements on the second column

```cpp
include <iostream>

int main(){
	int values [3][4] = {
		{80, 80, 85, 55 },
		{75, 85, 80, 60 },
		{90, 95, 90, 60 },
	};
	// j = Column var
	// i = Row var
	// j is constant at [1], i increases from 0-2.
	int j = 1;
	int total = 0;
	for (int i = 0; i < 3; i++}{
		total += Values[i][j];
	}

	std::cout << "Total: " << total;
}
```

## Chapter 14 - Recursion

A function that calls itself is known as a recursive function. This process is known as recursion.

In this example, we have called the recurse() function form inside the main function.

And, inside the recurse() function, we are again calling the same recurse function. This is a recursive call.

```cpp

int recourse();

int main(){
	recourse();
}

int recourse(){
	recourse();
}
```

A program to find a factorial of a number using recursion:

```cpp

if(n=1){
	fact(1)=1;
}

else{
	n*fact(n-1);
}
```

```cpp
int factorial(int n);
int main(){
	int number = 4, result;
	result = factorial(number);
	std::cout << " Factorial is = " << result;
}

int factorial(int n){
	if (n == 1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}
```

A program to calculate sum of N natural numbers using recursion. The value of N is entered by user.

```cpp

#include <iostream>

int addNumbers(int n);
int main(){
	int num;
	std::cout << "Enter a positive integer: ";
	std::cin >> num;
	std::cout << "Sum = " << addNumbers(num);
}

int addNumbers(int n){
	if (n == 0){
		return n;
	}
	else{
		return n + addNumbers(n - 1);
	}
}
```
