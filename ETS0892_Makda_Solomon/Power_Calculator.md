# Power Calculation Program

## Problem Analysis
**Goal**: To create a program that calculates the result of the expression \( x^y \) where the values of \( x \) and \( y \) are entered by the user.


1. **Input**:
   - Base number (integer).
   - Exponent (non-negative integer).

2. **Calculations**:
   - The program will multiply the base by itself for the number of times specified by the exponent.

3. **Output**:
   - Display the result of the base raised to the exponent.

## Algorithm
1. **Start** the program.
2. **Declare** variables for the base number (`x`), exponent (`y`), and result (initialized to 1).
3. **Prompt** the user to enter the base number and read the value into `x`.
4. **Prompt** the user to enter the exponent and read the value into `y`.
5. **Validate** the input for the exponent:
   - If the input fails or `y` is negative, display an error message and terminate the program.
6. **Calculate** the exponentiation using a loop:
   - For `i` from 0 to `y - 1`, multiply `result` by `x`.
7. **Display** the result of `x` raised to `y`.
8. **End** the program.
## Pseudocode
START

DECLARE x, y, result = 1

OUTPUT "Enter the base number:"
INPUT x

OUTPUT "Enter the exponent number:"
INPUT y

IF y < 0 OR input fails THEN
OUTPUT "Please enter a positive integer for the exponent"
ELSE
FOR i FROM 0 TO y - 1 DO
result = result * x
END FOR
OUTPUT x + " raised to " + y + " is " + result
ENDIF

END

# Flowchart
``` mermaid
flowchart 
id1([Start])-->id2[Result=1]
id2-->id3[/"Base number(x)"/]
id3-->id4[/"Exponent(y)"/]
id4-->id5{Exponent >= 0}
id5--True--->id6{Counter< Exponent}
id6--True--->id7["Result*=Base number(x)"]
id7--->id12[counter++]
id12-->id6
id6--False----->id10[/Result/]
id5--False-->id9[/Error message/]
id9-->id11([End])
id10-->id11
```
