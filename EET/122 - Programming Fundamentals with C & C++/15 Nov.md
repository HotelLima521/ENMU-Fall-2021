1. Write a program to make such a pattern like right angle triangle with a number which will repeat a number in a row

Sample output:
```
1
22
333
4444
```

```cpp
#include <iostream>

int main(){
	int i, j, rows;
	std::cout << " Input number of rows: ";
	std::cin >> rows;
	for(i = 1; i <= rows; i++){
		for(j = 1; j <= i; j++){
			std::cout << i;
		}
		std::cout << std::endl;
	}
}
```

2. Write a program to compute the average value of an array of integers except the largest and smallest values. Assume that an array named values contain the following numbers: 10, 20, 15, 5, and 25.

Sample output:
```
average value except the largest and smallest numbers: 15
```

```cpp
#include <iostream>

int main(){
	int values[] = {10, 20, 15, 5, 25};
	int max = values[0];
	int min = values[0];
	float sum = values[0];
	int length = sizeof(values)/sizeof(values[0]); // 4 bytes for int * 5 = 20 bytes, 20/4 = 5
	for(int i = 1; i < length; i++){
		sum += values[i];
		if(values[i] > max){
			max = values[i];
		}
		else if(values[i] < min){
			min = values[i];
		}
	}
	float x = ((sum-max-min) / (5-2));
	std::cout << "average value except the largest and smallest values: " << x << std::endl;
}
```

3. Write a program to find the number of even and odd integers in a given array of integers. Assume that an array named values contain the following numbers: 10, 20, 15, 5, 25.

sample Output:
```
Number of even numbers: 2
Number of odd numbers: 3
```

```cpp
#include <iostream>
int main(){
	int values[] = {10, 20, 15, 5, 25};
	int ctr = 0;
	int length = sizeof(values)/sizeof(values[0]);
	for(int i = 0; i < length; i++){
		if(values[i] % 2 == 0){
			ctr++;
		}
	}
	std::cout << "Number of even numbers: " << ctr << std::endl;
	std::cout << "NUmber of odd numbers: " << (length-ctr) << std::endl;
}
```
