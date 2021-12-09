```cpp
#include <iostream>

int main{
	int size=5;
	double values[size] = {20, 40, 90, 30, 70};
	double largest = values[0];
	for (int i=1; i<size; i++){
		if (values[i] > largest){
			largest = values[i];
		}
	}
	std::cout << "The largest value is = " << largest << std::endl;
	return 0;
}
```

## Linear Search
Visit all the elements until you have afound a match, or you have come to the end of the array.

The is also called linear search or sequential search because you inspect the elements in a sequence.

A program to search for the position of a specific element 30 in an aray:

```cpp
#include <iostream>

int main(){
	int size = 5;
	double values[size] = {20, 40, 90, 30, 70}
		double search = 30;
		bool found = false;
		int i;
		for(i=0; i<size && !found; i++){
			if(values[i] == search){
				found = true;
				std::cout << "Match found at = " << i << " index" << std::endl;
				}
			
		}
		if(!found){
			std::cout << "No match found" << std::endl;
		}
	}
	return 0;
}
```

## Removing an Element: Remove element in an ordered array

You need a variable to track number of elements. We used a variable called curentSize for that purpose.

If the elements in the array ar in a particular oder, then you must move all the elements following the element to be removed to a lower index, and then decrement the variable holding the size of the array.

- Supposed you want to remove the element with index 2 from the array values.

`int values[5] = {20, 40, 90, 30, 70};`

```cpp
#include <iostream>

int main(){
	int size = 5;
	int currentSize = size;
	int values[size] = {20, 40, 90, 30, 70};
	int pos = 2;
	for (int i = pos+1; i< currentSize; i++){
		values[i-1] = values[i];
	}
	currentSize--;
	for(int i = 0; i < currentSize; i++){
		std::cout << values[i];
	}

	return 0;
}

```
