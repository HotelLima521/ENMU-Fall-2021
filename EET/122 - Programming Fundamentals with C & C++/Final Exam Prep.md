Practice Problem: Write a proram to count all vowels in a string:

```cpp
#include <iostream>

int main(){
	int count = 0;
	string str;
	std::cout << "Input the string: ";
	getline(cin,str);
	for(int i = 0; i < str.length(); i++){
		if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u'){
			count++;
		}
	}
	std::cout << "Number of Vowels in the string: " << count << std::endl;
	
	return 0;
}
```

Practice Problem: Write a program and compute the sum of the digits of an integer

```cpp
#include <iostream>

int main(){
	int num1, sum, n;
	sum = 0;
	std::cout << "Input any number: ";
	std::cin >> num1;
	n = num1;
	while(num1 != 0){
		sum += num1 % 10;
		num1 /= 10;
	}
	std::cout << "The sum of the digit is: " << sum << std::endl;
	
	return 0;
}
```
