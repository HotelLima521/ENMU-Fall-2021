# Pointer as a Function Argument
Pinter as a function paramter is used to hold addresses of arguments passed during function call. This is known as call by reference.

Practice problem 1: What is the output of the following program?

```cpp
#include <iostream>

void increment(int a);
int main(){
	int a;
	a = 15;
	increment(a);
	std::cout << "a value is: " << a << std::endl;
}
void increment(int a){
	a+=1;
}
```

```cpp
#include <iostream>
void increment(int a);
int main(){
	int a;
	a = 15;
	increment(a)
	cout << "address of a in main: " << &a << endl;
}

void increment(int a){
	a=a+1;
	cout << "address of a in increment: " << &a << endl;
}
```

```cpp
#include <iostream>
void increment(int *p);
int main(){
	int a;
	a=15;
	increment(&a);
	cout << "a value is: " << a << endl;
}

void increment(int *p){
	*p += 1;
}
```

## Pointer and Arrays
In C++, pointers are variables that hold addresses of other variables. Not only can a pointer store the address of a single variable, it can also store the address of cells of an array.

```cpp
int grades[5];
int *ptr;
ptr = grades;


int grades[5]
int *ptr;
ptr = &grades[0];
```

