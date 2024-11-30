# Power Calculation Program

## Problem Analysis
**Goal**: To create a program that calculates the result of the expression \( x^y \) where the values of \( x \) and \( y \) are entered by the user.

### Inputs
- Value of \( x \).
- Value of \( y \).

### Processing
1. Prompt the user to enter the value of \( x \).
2. Prompt the user to enter the value of \( y \).
3. Calculate the result of \( x^y \) using the formula:
   \[
   power = x^y
   \]

### Outputs
- Display the result of \( x^y \).

## Algorithm
1. Start the program.
2. Initialize variables for \( x \), \( y \), and the result.
3. Prompt the user to enter the value of \( x \) and read the input.
4. Prompt the user to enter the value of \( y \) and read the input.
5. Calculate the result using the formula:
   \[
   power = x^y
   \]
6. Display the result using the message: "x raised to the power of y is: result."
7. End the program.
## Pseudocode
START
   
    DECLARE x AS DOUBLE
    
    DECLARE y AS DOUBLE
    
    DECLARE result AS DOUBLE

    PROMPT "Enter the value of x:"
    READ x

    PROMPT "Enter the value of y:"
    READ y

    result = pow(x, y)

    PRINT x, "raised to the power of", y, "is:", result

END

# Flowchart

```mermaid
flowchart TD
    id1([Start]) --> id2["Prompt: Enter Base number (x)"]
    id2 --> id3["Read Base number (x)"]
    id3 --> id4["Prompt: Enter Exponent (y)"]
    id4 --> id5["Read Exponent (y)"]
    id5 --> id6{Exponent (y) >= 0?}
    id6 -- True --> id7["Result = 1"]
    id7 --> id8["Counter = 0"]
    id8 --> id9{Counter < Exponent (y)?}
    id9 -- True --> id10["Result *= Base number (x)"]
    id10 --> id11["Counter++"]
    id11 --> id9
    id9 -- False --> id12["Display Result"]
    id12 --> id14([End])
    id6 -- False --> id13["Display Error: Negative Exponent Not Supported"]
    id13 --> id14
```
