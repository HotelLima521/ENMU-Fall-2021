# Chapter 1

## Analyzing C++ Program

```cpp
# include <iostream>
using namespace std;
int main()
{

return 0;
}
```

IOStream = Input/Output
namespace std = Standard Namespace
int main(){} = main function, instructions go within Curly brackets.
return 0; = When program executes successfully, it will return a 0.

# Analyzing your first program

*This program simply prints 'Hello World' on the Output*

```cpp
# include <iostream>
using namespace std;
int main()
{
 cout <<"Hello World"<< endl;
 return 0;
}
```

Output:
`Hello World`

If we want anything to do with input/output *we must include iostream*
- This line tells the computer to include a service for input/output. (`# include <iostream>`)
- Tells the computer to use standard namespace, it avoids naming conflictions in large programs. (`using namespace std;`)
- `int main()` = function named main where it expects to return an integer upon successful execution of program, e.g.:
```cpp
int main()
{
...
return 0;
}
```
- A function is a collection of programming instructions that carry out a particular task.

`<<` = insertion operator
`cout` = Print
`endl` = End line, returns cursor to next line instead of continuing on the same line on output, thus:
```cpp
cout<<"Hello World"<<endl;
//cout inserts "Hello World", then we insert an end line char
```
then the output will be:
`Hello World` and the cursor will continue on the line below.

You can print multiple items with cout on one line, as long as an insertion operator is placed prior to each item.

String: When the text is inside double quotations `"..."`, we call it a string.
E.g.,
```cpp
cout << "The answer is" << 6 * 7 << endl;
```

```cpp
#include <iostream>

using namespace std;

int main()
{
	cout<<"The answer is: "<<6*7<<endl;

	return 0;
}
```

# Chapter 2

## Variables
- A variable is a storage location in a computer program
- Each variable has a name and holds a value.

## Number type
- Numbers are two types: Whole number and floating-point numbers
Whole numbers: 0, 1, 20, 3000, etc.
Floats: 0.5, 1.304, 2.45089, 3.14 etc. Basically any number with fractions.

## Variable Names: Identifiers
- Variable names must start with a letter or underscore `_` character, the remaining characters must be letters, numbers, or underscores. Note that Vars can **NOT** start with a number, nor anything other than a *letter or underscore*; any other character than a letter, underscore, or number following the initial character will make the variable **INVALID**.
- Variable names are case sensitive. `Radius` and `radius` are different names, different variables.
- You can not use reserved words such as `int`, `double`, `cout`, etc as variable names.

## Variable Declarations
- Every variable in C++ must be declared. When you declare a variable, you are telling the computer what kind of data you will be storing in the data.

E.g. `<var type> <var name> = <value>`:
`int x = 155;`
`float x = 1.5;`
`char x = 'c';`
`str x = "I require more Espresso and Bourbon, my dear Jefferson.";`

Multiple Var declaration:
`<var type> <var name>, <var name>, ...;`
`int x, y;`
`float x, y, z;`
`str a, b, c, d, e, f, g;`
You get the idea.
