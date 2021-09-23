# Digital Codes (Gray Code)

The important featureof the Gray code is that it exhibits only a signle bit change from one code wrod to the next in sequence.

Binary-To-Gray code Conversion:

1. The most significant bit (Left-most) in the Gray codeis the same as the corresponding MSB in the binary number
2. Going from left to right, add each adjacent pair of binary code bits to get the next Gray code bit. Discard carries.

Example: Convert the binary number 10110 to Gray code.


```
Binary:     10110
Gray Code:  11101
```

## Gray-To-Binary code Conversion

1. The most significant bit (left-most) in the binary code is the same as the corresponding bit in the Gray code. MSB (Binary) = MSB (Gray code)
2. Add each binary code bit generated to the Gray code bit in the next adjacent position. Discard carries.

Example: Convert the following gray code word (11011) to binary.

```
Gray code: 11011
Binary:    10010
```

## Error codes (paritiy bits for error detection)

1. A parity bit tells if the number of 1's is odd or even.
2. Many systems use a parity bit as a means for bit error detection.
3. An even parity bit makes the total number of 1's even and odd parity bit makes the total odd.

```
BCD: [0]0101 -> Even parity => 2
      ^ Parity bit
     [1]0101 -> Odd parity => 3
```

```
Communication Channel
TX -> 00101 (Even) -> 00001 (Odd)-> RX
```

Example: Assign the proper even parity bit to the following code groups: (a) 1010 (b) 111000

A. 01010

B. 1111000

## The inverter
The Inverter (NOT gate) performs the operation called inversion or complementation.

Example: A Waveform is applied to an inverter. Determine the output waveform corresponding to the input and show the timing diagram.


## The AND gate
An AND gate produces a HIGH output only when all the inputs are HIGH. When any of he inputs are LOW the output is LOW.

Logic expressions for an AND Gate:

The logical AND function of two variables is represented mathematically either by placing a dot between the two variables as A . B, or by simpy the writing the adjacent letters without the dot, as AB.

X = A . B = AB
