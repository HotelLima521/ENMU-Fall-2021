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


