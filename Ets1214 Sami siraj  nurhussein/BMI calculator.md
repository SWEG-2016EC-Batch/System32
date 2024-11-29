Problem Analysis
The C++ program provided is intended to determine the Body Mass Index (BMI) for a certain number of persons depending on their 
weight and height. The BMI is a standard statistical measure used to classify people into weight categories 
(underweight, optimum weight, overweight, and obese) based on their weight with respect to their height.

pseudocode

Step 1: Begin

Step 2: Variable Declaration

Declare variable w to store weight
Declare variable h to store height
Declare a variable BMI for Body Mass Index
Declare a variable counter for the number of people
Step 3: Input Number of People

Prompt the user to enter the number of people measuring their BMI
Store the input value in counter
Step 4: Loop Through Each Person

For each person from 1 to counter, do the following:

Step 4.1: Input Weight

Prompt the user to input their weight in kilograms for the current person
Store the input value in w
Step 4.2: Input Height

Ask the user to enter their height in meters for the active person
Store the input value in h
Step 4.3: Calculate BMI

Calculate the BMI by using the formula: BMI = w / (h * h)
Step 4.4: Output BMI

Show the calculated BMI to the user
Step 4.5: Determine Weight Category

If the BMI is less than or equal to 18.5, display "you are underweight"
Else if BMI is greater than 18.5 and less than or equal to 24.9, print out "you are at optimum weight"
Else if BMI is greater than 24.9 and less than or equal to 29.9, print out "you are overweight"
Else, print out "you are obese"
Step 5: Stop
