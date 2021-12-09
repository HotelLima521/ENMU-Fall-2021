# Converting floating point numbers to integers

Occasionally, you have a value of a type double that you need to convert to the type int. It is an error to assign a floating-point value to an integer:

```cpp
double balance = total + tax;
int dollars = (int) balance; //cast operator is (int)
```

A proram to convert floating point number to integer:

```cpp
#include <iostream>

int main(){
	int a;
	double total = 5.0, tax = 8.75;
	double balance = total + tax;
	a = (int) (balance);
	std::cout << a;

	return 0;
}
```

# Random Number Generation (rand() function)

The rand() funciton is used in C/C++ to generate random numbers in the range [0, RAND\_MAX].

The rand funciton is declared in the <cstdlib> header.

A program to print 5 random numbers:

```cpp
#include <cstdlib>

int main(){
	for(int i = 0; i < 5; i++){
		std::cout << rand() << std::endl;
	}

	return 0;
}
```
- To overcome the problem with rand() specifiy a seed for the random number sequence
- Every time you use the new seed, the random number generatior starts generating a new sequence
- Seed is set wth srand() function (srand(0)), srand(0) from the ctime library makes use of the current system time to generate a completely different number every time.

```cpp
#include <cstdlib>
#include <ctime>
#include <iostream>
int main(){
	srand(time(0));
	for(int i = 0; i < 5; i++){
		std::cout << rand() << std::endl;
	}

	return 0;
}
```

## Generating random numbers within a specified range.

To obtain a random integer between a and b:
(int)(rand()%(b-a+1))+a

```cpp
// A program to print 5 random numbers betwee 1:10
#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
	srand(time(0));
	int randomNumber;
	for(int i = 0; i < 5; i++){
		randomNumber = (rand() % 10) + 1;
		std::cout << randomNumber << std::endl;
	}
}
```

# Pointers
In C++, a ppinter refers to a variable that holds tha address of another variable. Like regular variables, pointers have a data type.

```cpp
Type_Name *variable_Name;
```

Reference Operator (&) and Dereference Operator (\*)
- The reference operator (&) returns the variable's address.
- The dereference operator (\*) helps us get the value that has been stored in a memory address.
(Think of the reference operator as DNS, and dereference as rDNS).

```cpp
#include <iostream>

int main(){
	int num = 10;
	int *p;
	p = &num;
	std::cout << "Value of num: " << num << std::endl;
	std::cout << "Address of num: " << p << std::endl;

	return 0;
}
```
