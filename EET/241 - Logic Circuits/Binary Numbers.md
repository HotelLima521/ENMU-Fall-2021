# 2-2 Binary numbers

- The binary numbe system has base 2. The two binary digits are: 1 and 0.
- The weight sructure of a binary number is:
**2^n-1... 2^3 2^2 2^1 2^0 2^-1 2^-2 2^-3 ... 2^-n**

Example 1: Convert 1101 to decimal number:

8 4 2 1
1 1 0 1

8+4+0+1 = 13

Example 2: Convert 10.111 to decimal number:

2 + 0 + .5 + .25 + .125 = 2.875

## 2-3 Decimal to Binary Conversion

Sum of weights method: Converting whole decimal numbers to binary
- Determine the set of binary weights whose sum is equal to the decimal number.
- Place 1's and 0's on the appropriate weight positions determines the binary number for that decimal number.

Example 1: Convert decimal number 9 using Sum of Weights method

8 4 2 1
1 0 0 1

8 + 1 = 9 = 1001

Example 2: Convert decimal number 25 using Sum of Weights method

16 8 4 2 1
1  1 0 0 1

16 + 8 + 1 = 25 = 11001

### Repeated division by 2 method: Converting whole decimal numbers to binary:
- Divide the whole number by 2: Divide each resultant quotient by 2 until there is 0 whole number quotient
- The first remainder is least significant bit (LSB) and the last remainder is Most significant bit (MSB)

1100

See PDF for repeated division examples

### Sum of Weights method: Converting decimal fractions to binary
- Determine the set of binary weights whose sum is equal to the fractional decimal numer
- Place 1's and 0's on the appropriate weight positions determines the binary number for that decimal number

See PDF for examples
