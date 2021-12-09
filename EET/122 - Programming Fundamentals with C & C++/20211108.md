```cpp
#include <iostream>

int main(){
	int a;
	int *p;
	a = 10;
	p = &a;
	std::cout << "a = " << a << std::endl;
	*p = 12;
	std::cout << "a = " << a;
}
```

Integer = 4 bytes


```cpp
#include <iostream>

int main(){
	int a = 10;
	int *p;
	p = &a;
	std::cout << "Address of p is " << p << std::endl;
	std::cout << "Value at address p is " << *p << std::endl;
	std::cout << "Address of p+1 is: " << p+1 << std::endl;
	std::cout << "Value at address p+1 is: " *(p+1) << std::endl;
}
```

# Pointer to Pointer
- A pointer to a pointer is a form of multiple indeirection, or a chain of pointers. Normally, a pointer contains the address of a variable.
- When we define a pointer to pointer, the first pointer contains the address of the second pointer, which oints to the location that contains the actual value as shown below:

```cpp
#include <iostream>

int main(){
	int x = 10;
	int *p = &x;
	*p = 20;
	int **q = &p;
	cout << *p << endl;
	cout << *q << endl;
	cout << **q << endl;
}
```
