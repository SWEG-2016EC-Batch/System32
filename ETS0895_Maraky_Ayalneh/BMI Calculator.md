
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
    id1([Start]) --> id2["Input weight in kilograms"]
    id2 --> id3["Input height in meters"]
    id3 --> id4["BMI = weight / (height * height)"]
    id4 --> id5["Display BMI"]
    id5 --> id6{BMI < 18.5?}
    id6 -->|Yes| id7["Display 'Underweight'"]
    id6 -->|No| id8{BMI < 24.9?}
    id8 -->|Yes| id9["Display 'Normal weight'"]
    id8 -->|No| id10{BMI < 29.9?}
    id10 -->|Yes| id11["Display 'Overweight'"]
    id10 -->|No| id12["Display 'Obese'"]
    id7 --> id13["Ask to continue (y/n)"]
    id9 --> id13
    id11 --> id13
    id12 --> id13
    id13 --> id14{Choice = 'y' or 'Y'?}
    id14 -->|Yes| id2
    id14 -->|No| id15([End])
```
