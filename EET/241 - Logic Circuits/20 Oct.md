# The Standard SOP Form
- A Standard SOP expression is one in which each product term contains all the variables in the domain appear of the expression.
- For example, A(!B)CD+!(ABCD)+AB!(CD) is a standard SOP expression.

## Converting Product Terms to Standard SOP:
A non-standard SOP expression is converted into standard form using boolean algebra Rule 6: A+(!A) = 1: A variable added to its complement equals 1.
- Step 1: Multiply each nonstandard product term by a term made up of the sum of a missing variable and its compement. This results in two product terms.

*AB + BC = AB(C+!(C))+BC(A+!(A)) = ABC + AB!(C) + BCA + BC!(A)*

- Step 2: Repeat Step 1 until all resulting product terms contain all variables in the domain in either complemented or uncomplemented form.

Example: Convert the following Boolean expression into standard SOP form:
!(AB) + AC + AB(!C)

*first two terms are non standard, last term is standard*

## The Product of Sums (POS) form:
When two or more sum terms are multiplied, the resulting expression is a product-of-sums (POS)
(!(A)+B)(A + !(B) + C)
(A+B) (A + !(B) + C) (!(A) + C)

## The standard POS form:
A standard POS expression is one in which each sum term contains all the variables in the domain appear of the expression

!(A+B+C) (A + !(B) + C) (!(A) + B + !(C))

## Converting a Sum Term to a Standard POS:

A non standard POS expression is converted into standard form using Boolean algebra rule 8: A * !(A) = 0: A variable multiplied by its complement equals 0.
- Step 1: Add to each nonstandard product term made up of the product of the missing variable and its complement. This results in two sum terms.
- Step 2: Apply rule 12: A + BC = (A+B)(A+C)
- Step 3: Repeat Step 1 until all resulting sum terms contain all variables in the domain in either complemented or uncomplemented form.

Example: Convert the following Boolean expression into standard POS form:
!(A+B) (A + C) (A + B + !(C))
= 
(!(A)+!(B)+C!(C)) (A + C + B!(B)) (A + B + !(C))
=
(!(A)+!(B)+C) (!(A)+!(B)+!(C)) (A + C + B) (A + C + !(B))
=

## Converting SOP expressions to Truth Table Format:

An SOP expression is equal to 1 only if at least one of the product terms is equal to 1.
- The first step in constructing a truth table is to list all possible combinations of binary values of the variables in the expression.
- Next, convert the SOP expression to standard form if it is not already.
- Finally, place a 1 in the output column (X) for each binary value that makes the standard SOP expression a 1 and place a 0 for all the remaining binary values.

Example: Develop a truth table for the standard SOP expression:
(!(A)!(B)C) + (A!(B)!(C)) + (ABC)
Expression 1: A = 0, B = 0, C = 1
Expression 2: A = 1, B = 0, C = 0
Expression 3: A = 1, B = 1, C = 1

```
A  B  C | X
-----------
0  0  0 | 0
0  0  1 | 1
0  1  0 | 0
0  1  1 | 0
1  0  0 | 1
1  0  1 | 0
1  1  0 | 0
1  1  1 | 1
```

Develop a Truth table for the following expression:

!(AB) + (AB!(C)
(!(A)!(B))\*(C!(C)) + (AB!(C)
((!A)(!B)(C)) + ((!A)(!B)(!C)) + (AB(!C))
Expression 1: A = 0, B = 0, C = 1
Expression 2: A = 0, B = 0, C = 0
Expression 3: A = 1, B = 1, C = 0

```
A  B  C | X
-----------
0  0  0 | 1
0  0  1 | 1
0  1  0 | 0
0  1  1 | 0
1  0  0 | 0
1  0  1 | 0
1  1  0 | 1
1  1  1 | 0
```
