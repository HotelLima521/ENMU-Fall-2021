# DeMorgan's Theorems

DeMorgan's first theorem: The complement of a product of variables is equal to the sum of the complements of the variables

!(XY) = !X + !Y

DeMorgan's second theorem: The complement of sum of variables is equal to the product of the complements of the variables
!(X+Y) = !X * !Y

Example: Apply DeMorgan's theorems to the expressions !(XYZ) and !(X+Y+Z)

!(XYZ) = !X+!Y+!Z
!(X+Y+Z) = !X !Y !Z

Example: Apply DeMorgan's theorems to the expressions
a. !((A+B+C)D) = *Assume A+B+C=X*, !((A+B+C)D), !(ABC) = !X, !D = Y, = !(A+B+C) + !D, = !A * !B * !C + !D
b. !(ABC+DEF) = *Assume X= ABC, Y = DEF*, = !(ABC) + !(DEF), = (!A+!B+!C)(!D+!E+!F)

Example: Apply DeMorgan's Theorems to the expressions:

a. !(!(A+B)+!C)) = (A+B)+C = A * B + C

## Boolean Expression for a Logic Circuit
To derive the boolean expression for a given combinational logic circuit, begin at the left most inputs and work toward the final output, writing the expression for each gate.

Evaluating the expression: A(B+CD)
If A(B+CD) = 1, A = 1 and (B+CD) = 1.
B+CD = 1 if B = 1, or CD = 1.
