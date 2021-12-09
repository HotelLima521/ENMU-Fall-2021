## For Loop

Example 3: Count iterations

```cpp
for(int i=1; i<=5; i++){
	std::cout << i << endl;
}

for(int i=1; i<5; i++){
	std::cout << i << endl;
}
```

## Strings and Character
The at function returns a char value from a string. The first-string position is labeled 0, the second string position as 1, and so on.

Write a program to print 3rd character of a given string

```cpp
#include <iostream>

int main(){
	string name="MdSayeed";
	char c=name.at(2);
	std::cout << "Hello World";
	std::cout << "The 3rd character is: " << c;

	return 0;
}
```

```cpp
#include <iostream>

int main(){
	int counter = 0;
	string str="my name is Sayeed";
	for(int i = 0; i < str.length(); i++){
		char ch = str.at(i);
		if(ch == ' '){
			counter++;
		}
	}
		
	std::cout << "Total number of spaces is: " << counter;
	
	return 0;
}
```

```cpp
#include <iostream>

int main(){
	string str = "My name is Sayeed";
	bool found = false;
	char ch;
	int position = 0;
	while(!found && position < str.length()){
		ch = str.at(position);
		if (ch == ' '){
			found = true;
			std::cout << "Match found at index number " << position;
		}
		else{
			position++;
		}
	}
	
	return 0;
}
```
