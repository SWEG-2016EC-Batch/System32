Problem Analysis
The goal of the program is to calculate the Body Mass Index (BMI) for multiple people, determine their weight category, and provide feedback based on their BMI.
1. Inputs:
The number of people whose BMI needs to be calculated (num).
For each person:
 Weight in kilograms (weight).
 Height in meters (height).
2. Processing:
 Calculate BMI using the formula:
BMI=weight/(height*height)
​Compare the calculated BMI against predefined ranges to determine the weight category:
BMI < 18.5: Underweight
18.5 ≤ BMI ≤ 24.9: Healthy weight
25 ≤ BMI < 29.9: Overweight
BMI ≥ 30: Obese
3. Outputs:
Display the BMI for each individual.
Provide feedback on their weight category.


Algorithm
step 1: Start.
step 2: Prompt the user to input the number of people (num).
step 3: For each person from 1 to num:
     step 3.1: Prompt the user to input their weight in kilograms (weight).
     step 3.2: Prompt the user to input their height in meters (height).
     step 3.3: Calculate BMI using the formula: BMI=weight/(height*height).
     step 3.4: ​Display the calculated BMI.
     step 3.5: Determine the weight category:
                   step 3.5.1: If BMI < 18.5, display "You are underweight!"
                   step 3.5.2: If 18.5 ≤ BMI ≤ 24.9, display "You have a healthy weight!"
                   step 3.5.3: If 25 ≤ BMI < 29.9, display "You are overweight!"
                   step 3.5.4: If BMI ≥ 30, display "You are obese!"
step 4: End.
