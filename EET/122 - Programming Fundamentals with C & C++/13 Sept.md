# Boolean Variables and Operators
Boolean data types have exactly two values: true or false. An expression/condition that returns either true or false is a Boolean expression.

"If you fail the exam, you have to retake." Write code to implement the following propositional statement.

```cpp
#include <iostream>
#include <string>

using namespace std;

int main(){
        bool failed = true;
        if(failed){
                cout << "This is a failure, you must retake the exam."
<< endl;
        }
        else{
                cout << "Yeah you good" << end;
        }

        return 0;
}
```


## Not (!) Boolean Operators

Sometimes you need to invert a condition with the not (!) Boolean operator.

"If it rains today, I will stay at home, otherwise I will go outside to watch movies."

```cpp
#include <iostream>
#include <string>

using namespace std;

int main(){
        bool rains = false;

        if (!rains){
                cout << "Stay at home" << endl;
        }
        else{
                cout << "Go outside and watch movies" << endl
        }

        return 0;
}
```

## And (&&) and Or (||) operators
- Sometimes, you need to evaluate multiple conditions to make a decision. There's two boolean operators that combine multiple conditions: && (and) and || (or)
- The && operator yields _true_ only _when both conditions are true_. The || operator yields the result _true_, if at least _one of the conditions are true_.

```cpp
(0 < 200) && (200 < 100) = False
(0 < 200) || (200 < 100) = True
```

```cpp
#include <iostream>

using namespace std;

int main(){
	int number = 89;
	if(number > 0 && number < 100){
	cout << "Given integer number is within the range 0-100" << endl;
	}

	return 0;
}
```

## While Loop
While loop executes block of code/statement repeatedly until a specific goal is attained. The repetition will continue as long as the condition remains true.

```cpp
while(condition){
	//statements
}
```

```cpp
while (counter <= 100){
	sum = sum+counter;
	counter++;
}
```

```cpp
#include <iostream>

using namespace std;

int main(){
	int sum = 0;
	int counter = 1;
	while (counter <= 3){
		sum = sum + counter;
		counter++;
	}

	cout << "The summation of 1+2+3 is: " << sum << endl;
	
	return 0;
}
```
