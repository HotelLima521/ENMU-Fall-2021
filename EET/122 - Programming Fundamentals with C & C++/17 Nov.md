```cpp
#include <iostream>

void increment(int *p);
int main(){
	int a = 15;
	increment(&a);
	std::cout << "a value is " << a << std::endl;
}

void increment(int *p){
	*p += 1;
}
```
