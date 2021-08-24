# Analog and Digital quantities

Analog Quantities: An analog quantity is one having *continuous* values.
E.g. Suppose you want to take a temperature reading of the weather continuously.

Digital Quantities: A digital quantity is one having *discrete* values.
E.g. If you record temperature values for every hour instead of recording it continuously.


Digital advantage:
- Digital data can be processed mored efficiently
- Noise does not affect digital data unlike analog signals
- With digital signal there is finite number of points

Understanding Analog
- If you have $100 in your bank account, you can spend no more than $100- thus `0 < money_spend <= 100`
- Consider an analog circuit where the supply voltage is 3.3V, `0 < measured_voltage <= 3.3V`

Understanding Digital
- In a digital circuit,  there are two voltage levels or states: LOW (0) and HIGH (1)
- Measured voltage is represented by either 0 (Low) or 1 (High)

High and Low indicate a range of voltage.

0V |----.8V-----2V-----| 3.3V
{0V (Low)}------{1 (High)}

(CMOS Technology)

#Binary Digits, Logic Levels, and Digital Waveforms

## Binary Digits

- Digital electronics invole circuits and system in which there are only two possible states. These states are represented by two different voltage levels: a HIGH and a LOW.

Binary digits are: 1, 0

1 represents HIGH, 0 represents LOW (Positive Logic)
0 represents LOW, 1 represents HIGH (Negative Logic)

## Logic Levels
- The voltage used to represent a 1 (HIGH) and a 0 (LOW) are called logic levels.
- In practical digital circuits, HIGH and LOW represent a range of voltage.

V(H) Max |------------ => 3.3V
---------|  HIGH (1)
V(H) Min |------------ => 2V
---------|
V(L) Max |------------ => 0.8V
---------|  LOW (0)
V(L) Min |------------ => 0V

E.g. CMOS Technology supply voltage = 3.3V
0-0.8V => LOW
2-3.3V => HIGH

## Digital Waveforms

- Positive going pulse: `....|*****|.....|*****|`
If voltage goes from LOW level too HIGH level (`.... = LOW (0), *****= HIGH (1), ....|*** the | is the rising edge, ***|.... the | is the falling edge`)

- Negative going pulse: `******|.....|*****`

## Waveform Characteristics
- Digital waveforms can be classified as either periodic or nonperiodic

Periodic Digital Waveform: Repeats itself at fixed intervals (Period or T)
e.g. `...|***|...|***|...|***`

Non-Periodic Digital Waveform: Does not repeat itself at fixed intervals.
e.g. `...|************|....|*****|...........................|***|....`

## Periodic Digital Waveform
- Frequency:
Frequency (f) is the reciprocal of Period (T)
f = 1/T

- Pulse Width:
The elapsed time between rising and falling edges of a single pulse. `|***|`

- Duty cycle: The ratio of the pulse width to the period.
Duty cycle = Pulse Width/Period

`..|***|..................|***|...........`
`--0---1------------------10--11----------`
a. Period T = 10ms
b. Frequency f = 1/T = 1/10ms f= 100Hz
c. Pulse width(tw)/Period = (1ms/10ms)x100%=10%
