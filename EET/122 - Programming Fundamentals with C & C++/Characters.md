# Characters

## Character
A character is value of data type char. A character variable is simply a variable that can hold a character. It is surrounded by single quotes.

Characters: Letters, numbers, spaces, etc.

```cpp
char ch = 'H';
```

```
<data type> <variable name> <character value/literals>
```

## String
A string is a sequence of characters: letter, numbers, punctuation, spaces, etc. It is surrounded by double quotes.

```cpp
string name = "Harry";
```

```
<data type> <variable name> <string value>
```

To use the string class we must include the string library: `#include <string>`
String Length Calculation: The number of characters in a string is called the length of a string. YOu can compute the length of a string using length method.

```cpp
string name = "Harry";
int a = name.Length();
```

String concatenation: You can concatenate two string to onelong string using + operator.

## Arithmetic Operators:
C++ supports four basic arithmetic operations: addition, subtraction, multiplication, and division but it uses different symbols for multiplication and division.

Operation:

Addition: `+`
Subtraction: `-`
Multiplication: `*`
Division: `/`

Integer Division and Remainder:

*Integer division*: if both numbers of `/` (division operator) are integers, the remainder is discarded. For example, 7/4 results 1 because 7 divided by 4 is 1 iwth a remainder of 3 (which is discarded).

```
7/4 = 1.75
7/4 = 1
```

*% Modulus Operator*: The % operator computes the remainder of an integer division.

```
7%4 = 3
17%5 = 
```

Write a program to pri nt the quotient and remainder of an integer division when 17 is divided by 3.
