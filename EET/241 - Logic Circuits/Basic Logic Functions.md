# Chapter 1: 1-3 Basic Logic Functions

Many situations and process that you encounter in your daily life can be expressed in the form of propositional or logic functions. Since such functions are true/false or yes/no statements, digital circuits with their two-state characteristics are applicable.

*The light is on only if the bulb is not burned out and the switch is on.*

## NOT Function
The NOT function changes one logic level to the opposite logic level.

```
Input --|>o-- Output
      NOT gate
```

```
Input | Output
------|-------
0     |   1
1     |   0
```
```
0 ---|>o--- 1

1 ---|>o--- 0
```

## AND Function
The AND function produces a HIGH output only when all the inputs are HIGH as indicated in Figure.

```
In ---
      |)--- Out
In ---
```
*Truth Table*
```
Input | Output
------|-------
0 0   | 0
0 1   | 0
1 0   | 0
1 1   | 1
```

## OR Function
The OR function produces a HIGH output only when one or more inputs are high.

```
In ---
      )>--- Out
In ---
```

```
Input | Output
------|-------
0 0   | 0
0 1   | 1
1 0   | 1
1 1   | 1
```

# Chapter 2: 2-1 Decimal Numbers

- The decimal number system is base 10
- The value of digit is determined by its position in the number

Weight structure for Fractional decimal number:
```
...10^3, 10^2, 10^1, 10^0, 10^-1, 10^-2, 10^-3, ...
|------------------------| |-----------------------|
Whole number                 Fractional number
```
Example 1: Express the decimal number 4785 as a sum of values of each digit:

4000
700
80
5
```
10^4 10^3 10^2 10^1 10^0 10^-1 10^-2 10^-3
N/A    4    7    8    5
```

4785 = (4x10^3)+(7x10^2)+(8x10^1)+(5x10^0) = 4000 + 700 + 80 + 5

Example 2: Expres the decimal number 47.25 as a sum of values in each weight.

40
7
.2
.05
```
10^4 10^3 10^2 10^1 10^0 10^-1 10^-2 10^-3
0     0    0    4    7    2     5
```
47.25 = (4x10^1)+(7x10^0)+(2x10^-1)+(5x10^-2) = 40 + 7 + 0.2 + 0.05

## Binary Numbers

- The Binary number system has base 2.
- The two binary digits are 0 and 1.

Weighted Structure:

```
2^4 2^3 2^2 2^1 2^0 2^-1 2^-2 2^-3
```
