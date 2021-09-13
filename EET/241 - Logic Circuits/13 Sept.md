# Signed Addition

Add two numbers and discard any final carry bit.

Example 1: Perform the following addition of the signed numbers:
00001111+11111010

00001111
11111010
= 00001001


Example 2: Perform the following addition of the signed numbers:

00010000
11101000
= 11111000

## Subtraction

Subtraction is a special case of addition. To subtract two signed numbers, take the 2's complement of the subtrahend and add. Discard any final carry bit.

## Overflow condition:

When two numbers are added and the number of bits required to represent the sum exceeds the number of bits in the two numbers, an overflow results as indicated by incorrect sign bit.

Perform the following addition of the signed numbers:

00001100 - 11110111
