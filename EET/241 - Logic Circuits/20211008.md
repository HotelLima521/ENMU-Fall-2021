# Signed Numbers

A signed binary number consists of both sign and magnitude information. There are three forms in which signed integer (whole numbers) can be represented in binary: *sign magnitude*, *1's complement*, and *2's complement*

## Sign-Magnitude Form
When a signed binary number is represented in sign-magnitude, the left most bit is the sign-bit and the remaining bits are the magnitude bits. A 0-sign bit indicates a positive number and a 1 sign bit indicates a negative number.

12 = in 8 bit
128 64 32 16 8 4 2 1
00001100 (12)
10001100 (-12)

0 sign bit = Positive number
1 sign bit = Negative number

Example: Express the decimal number -25 as an 8-bit number in the sign-magnitude form

128 64 32 16 8 4 2 1

10011001
sign (1) magnitude (7) => 8-bit number

## 2's complement form
In the 2's complement form, a negative number is the 2's complement of the corresponding positive number

Negative number = 2's complement of the positive number.

Example: Express the decimal number -25 as the 2's complement form.
-25 = 2's complement of +25

25 in binary: 00011001
2's complement: 11100110 + 0000001 = **11100111**
-25 = 11100111

