# Assignment Statement
- An assignment statement place a new value into a variable.
An *expression* is a nmber, a variable, or a combination of numbers and variables and operation symbols

`variable = expression;`
`=` is the assignment operator.

E.g.:
`SUM = 6;` 6 is assigned to SUM whenever SUM is called
`number = 5;` 5 is assigned to number whenever number is called
`SUM = SUM + number` overwrites the value originally in SUM, so what was originally 6, becomes 11.

x = 0
x = x + 2, x is 2.

## Unititialized Variables
- A variable has no meaningful value until a program gives it one.
- E.g., if the variable y has not been given a value, then the following assignment statement is an error.

```cpp
int y; //Variable declaration
int x;
x = y +2; //Assignment statement
```

```cpp
int x;
int y = 10;
x = y+2;
```

## Variable Declarations with initialization

```cpp
Type_Name variable_Name1= Expression_for_value_1,
	variable_Name2= Expression_for_value_2, ...;
```

## cout
- To display values of the variables as well as strings of text, you use an entity called cout and the `<<` operator (sometimes called the *insertion* operator.
- Notice that strings must be included in double quotes.
```cpp
int square_area = 25;
```

Ex. 1: What will be printed at the output after execution of the following statement, assuming the value of the variable `square_area` is 25?

```cpp
cout << "The area is: " << square_area;
```

The output is:

`The area is: 25`

Ex. 2: What will be printed at the output after execution of the following statement, assuming the value of the variable `square_area` is 25?

```cpp
cout << "the area is:\n" << square_area
```

The output is:

```
The area is:
25
```

Write a program to print the area of the square, where length of each side is 5. The equation for area or the square A = a^2, were a is the length of each side (see square.cpp)
