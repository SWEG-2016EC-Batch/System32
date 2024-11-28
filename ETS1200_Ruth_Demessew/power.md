Problem Analysis
The program computes the result of 𝑥^𝑦, where x is the base number and y is the power (exponent). It uses a loop to perform repeated multiplication.
1. Inputs:
Base number (𝑥): An integer, can be positive, negative, or zero.
Power number (y): A non-negative integer.
The program calculates the product by multiplying the base x by itself y times. This is done using a for loop that iterates y times.
Outputs:
The result of 𝑥^𝑦 (i.e., the value of x raised to the power y).


Algorithm
step 1: Start.
step 2: Prompt the user for: the base number 𝑥 and the power number y respectively.
step 3: Check if y is a non-negative integer: If 𝑦 < 0, display an error message and terminate the program.
step 4: Initialize product = 1.
step 5: If 𝑦 > 0, For each value i from 1 to y: Multiply product by x (i.e., accumulate the base x multiplied by itself y times).
step 6: Display the result (product).
step 7: End.
