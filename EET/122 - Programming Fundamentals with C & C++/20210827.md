## \n and endl
- To start a new output line, you can inlude `\n`in the quoted string. Alternatively, you can start a new line by outputing `endl`

```cpp
// Example 1, New Line (\n)
cout << "Fall 2020\n";
cout << "EET 293\n";

// Example 2, End Line (endl)
cout << "fall 2020" << endl;
cout << "EET 293" << endl;
```

## Formatted Output

When you print the result of a computation, sometimes you may want to control its appearance.

```cpp
cout.setf(ios::fixed); // Fixed point notation
cout.setf(ios::showpoint); // Decimal point will be displayed
cout.precision(2); // Specified number of decimal points
```

1.21596
1.22

The code above rounds up the number 1.21596 to 1.22

## cin Statements
- A `cin` statement sets variable equal to values typed in at the keyboard.
- When a program executes the input statement it waits for user to provide input. The user also needs to hit the Enter key so that th eprogram accepts the input.

```cpp
cin >> Variable_1 >> Variable_2 >> ...;
```

Example 1:

```cpp
cin >> price;
```

Example 2:
```cpp
cin >> number >> size;
```

Example 3:
```cpp
cout << "Please enter the values: ";

cin >> price;
```
