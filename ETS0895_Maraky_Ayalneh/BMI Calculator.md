
## Problem Analysis:

We need a program that calculates the Body Mass Index (BMI) of multiple people. The BMI formula is:

$$
BMI = \frac{w}{h^2}
$$

Where:
- w = weight (in kilograms)
- h = height (in meters)

### Input:
- Weight (w) in kilograms.
- Height (h) in meters.

### Process:
- Calculate BMI using the formula.
- Based on the BMI value, categorize the result:
  - Underweight: BMI < 18.5
  - Normal weight: 18.5 <= BMI < 24.9
  - Overweight: BMI >= 25

### Output:
- Display the BMI category for the user.
- Continue calculating BMI for multiple people until the user decides to stop.


## Pseudocode 
``` plaintext
Step 1: Input the weight in kilograms
Step 2: Input the height in meters
Step 3: Calculate BMI using the formula: BMI = weight / (height * height)
Step 4: Display the calculated BMI
Step 5: If BMI < 18.5, Display "You are underweight"
Step 6: Else if BMI >= 18.5 and BMI < 24.9, Display "You have a normal weight"
Step 7: Else if BMI >= 25 and BMI < 29.9, Display "You are overweight"
Step 8: Else, Display "You are obese"
Step 9: Ask the user if they want to continue (y/n)
Step 10: If the user enters 'y' or 'Y', repeat steps 1 to 9
Step 11: If the user enters 'n' or 'N', end the program
End
```
## Flowchart
``` mermaid
flowchart TD
    A[Start] --> B[Input weight]
    B --> C[Input height]
    C --> D[Calculate BMI]
    D --> E[Display BMI]
    E --> F{BMI < 18.5?}
    F -->|Yes| G[Display "Underweight"]
    F -->|No| H{BMI < 24.9?}
    H -->|Yes| I[Display "Normal weight"]
    H -->|No| J{BMI < 29.9?}
    J -->|Yes| K[Display "Overweight"]
    J -->|No| L[Display "Obese"]
    G --> M[Ask to continue (y/n)]
    I --> M
    K --> M
    L --> M
    M --> N{Choice = 'y' or 'Y'?}
    N -->|Yes| B
    N -->|No| O[End]
```
